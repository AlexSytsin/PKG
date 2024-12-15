#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , brfc(nullptr)
    , brfs(nullptr)
    , naive(nullptr)
    , dda(nullptr)
{
    ui->setupUi(this);

    // Инициализация интерфейса
    setupUI();

    // Установка начального алгоритма
    currentAlgorithm = "circle";
    showBrCircle();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupUI()
{
    l = new QGridLayout();
    lText = new QLabel("Выберите алгоритм");
    lText->setAlignment(Qt::AlignCenter);

    // Поля для ввода координат и радиуса
    x0Edit = new QLineEdit();
    y0Edit = new QLineEdit();
    x1Edit = new QLineEdit();
    y1Edit = new QLineEdit();
    radiusEdit = new QLineEdit();

    // Настройка кнопок
    pbBrCircle = new QPushButton("Брезенхем(круг)");
    pbBrSegment = new QPushButton("Брезенхем(сегмент)");
    pbNaiveAlgorithm = new QPushButton("Наивный");
    pbDDA = new QPushButton("ЦДА");

    // Подключаем сигналы к кнопкам для выбора алгоритмов
    connect(pbBrCircle, &QPushButton::clicked, this, &MainWindow::showBrCircle);
    connect(pbBrSegment, &QPushButton::clicked, this, &MainWindow::showBrSegment);
    connect(pbNaiveAlgorithm, &QPushButton::clicked, this, &MainWindow::showNaive);
    connect(pbDDA, &QPushButton::clicked, this, &MainWindow::showDDA);

    // Подключаем сигналы изменений в полях ввода
    connect(x0Edit, &QLineEdit::textChanged, this, &MainWindow::onValuesChanged);
    connect(y0Edit, &QLineEdit::textChanged, this, &MainWindow::onValuesChanged);
    connect(x1Edit, &QLineEdit::textChanged, this, &MainWindow::onValuesChanged);
    connect(y1Edit, &QLineEdit::textChanged, this, &MainWindow::onValuesChanged);
    connect(radiusEdit, &QLineEdit::textChanged, this, &MainWindow::onValuesChanged);

    // Добавляем элементы управления в макет
    l->addWidget(lText, 0, 0, 1, 4);
    l->addWidget(new QLabel("x0:"), 1, 0);
    l->addWidget(x0Edit, 1, 1);
    l->addWidget(new QLabel("y0:"), 1, 2);
    l->addWidget(y0Edit, 1, 3);
    l->addWidget(new QLabel("x1:"), 2, 0);
    l->addWidget(x1Edit, 2, 1);
    l->addWidget(new QLabel("y1:"), 2, 2);
    l->addWidget(y1Edit, 2, 3);
    l->addWidget(new QLabel("R:"), 3, 0);
    l->addWidget(radiusEdit, 3, 1);

    // Добавляем кнопки для выбора алгоритмов
    l->addWidget(pbBrCircle, 11, 0, 1, 1);
    l->addWidget(pbBrSegment, 11, 1, 1, 1);
    l->addWidget(pbNaiveAlgorithm, 11, 2, 1, 1);
    l->addWidget(pbDDA, 11, 3, 1, 1);

    ui->centralwidget->setLayout(l);
}

void MainWindow::showBrCircle()
{
    currentAlgorithm = "circle";
    lText->setText("Алгоритм круга Брезенхэма");
    updateDrawing();
}

void MainWindow::showBrSegment()
{
    currentAlgorithm = "segment";
    lText->setText("Алгоритм сегмента Брезенхэма");
    updateDrawing();
}

void MainWindow::showNaive()
{
    currentAlgorithm = "naive";
    lText->setText("Наивный алгоритм");
    updateDrawing();
}

void MainWindow::showDDA()
{
    currentAlgorithm = "dda";
    lText->setText("DDA");
    updateDrawing();
}

void MainWindow::onValuesChanged()
{
    // Когда значения в полях меняются, обновляем рисунок
    updateDrawing();
}

void MainWindow::updateDrawing()
{
    // Скрываем все предыдущие виджеты
    if (brfc) brfc->hide();
    if (brfs) brfs->hide();
    if (naive) naive->hide();
    if (dda) dda->hide();

    // Получаем текущие координаты и радиус из полей
    QPointF p0(x0Edit->text().toDouble(), y0Edit->text().toDouble());
    QPointF p1(x1Edit->text().toDouble(), y1Edit->text().toDouble());
    int radius = radiusEdit->text().toInt();

    // Проверяем выбранный алгоритм и рисуем соответствующую фигуру
    if (currentAlgorithm == "circle") {
        if (radius <= 0) {
            return;
        }
        brfc = new BrForCircle(p0.x(), p0.y(), radius);
        l->addWidget(brfc, 4, 0, 7, 4);
        brfc->show();
    }
    else if (currentAlgorithm == "segment") {
        brfs = new BrForSegment(p0.x(), p0.y(), p1.x(), p1.y());
        l->addWidget(brfs, 4, 0, 7, 4);
        brfs->show();
    }
    else if (currentAlgorithm == "naive") {
        naive = new NaiveAlgorithm(p0.x(), p0.y(), p1.x(), p1.y());
        l->addWidget(naive, 4, 0, 7, 4);
        naive->show();
    }
    else if (currentAlgorithm == "dda") {
        dda = new DDA(p0.x(), p0.y(), p1.x(), p1.y());
        l->addWidget(dda, 4, 0, 7, 4);
        dda->show();
    }
}

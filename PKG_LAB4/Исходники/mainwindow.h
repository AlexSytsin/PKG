#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPointF>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include "BrezCircle.h"
#include "BrezSeg.h"
#include "Naive.h"
#include "CDA.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void showBrCircle();       // Показать алгоритм круга Брезенхэма
    void showBrSegment();      // Показать алгоритм сегмента Брезенхэма
    void showNaive();          // Показать наивный алгоритм
    void showDDA();            // Показать алгоритм DDA
    void onValuesChanged();    // Слот для обработки изменений в полях ввода
    void updateDrawing();      // Метод для обновления рисунка

private:
    Ui::MainWindow *ui;
    QGridLayout *l;
    QLabel *lText;
    QLineEdit *x0Edit, *y0Edit, *x1Edit, *y1Edit, *radiusEdit;
    QPushButton *pbBrCircle, *pbBrSegment, *pbNaiveAlgorithm, *pbDDA;
    BrForCircle *brfc;
    BrForSegment *brfs;
    NaiveAlgorithm *naive;
    DDA *dda;
    QString currentAlgorithm;  // Текущий выбранный алгоритм

    void setupUI();            // Метод для настройки пользовательского интерфейса
};

#endif // MAINWINDOW_H

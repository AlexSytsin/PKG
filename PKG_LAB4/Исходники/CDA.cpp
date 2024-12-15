#include "CDA.h"
#include <cmath>

#define roundf(x) floor(x + 0.5f)

DDA::DDA(double x1, double y1, double x2, double y2, QWidget *parent)
    : QWidget(parent)
{
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;

    // Определяем количество шагов как максимальную разницу по осям
    int steps = std::max(std::abs(deltaX), std::abs(deltaY));

    if (steps == 0) {
        points.push_back(QPointF(x1, y1));
        return;
    }

    // Вычисляем приращения
    double dX = deltaX / steps;
    double dY = deltaY / steps;

    double x = x1;
    double y = y1;

    // Генерация точек
    for (int i = 0; i <= steps; i++) {
        points.push_back(QPointF(std::round(x), std::round(y)));  // Округляем правильно
        x += dX;
        y += dY;
    }
}
void DDA::paintEvent(QPaintEvent*)
{
    QPainter painter1(this);
    double h = this->height();
    double w = this->width();
    h /= 2;
    w /= 2;

    double hScale = 20; // Шаг по оси Y
    double wScale = 20; // Шаг по оси X

    painter1.translate(w, h);
    painter1.setPen(QPen(Qt::red, 2)); // Толщина линии
    painter1.setBrush(Qt::red); // Цвет маркеров

    // Рисуем линию, соединяющую точки
    for (size_t i = 0; i < points.size() - 1; ++i) {
        double x1 = points[i].x() * wScale;
        double y1 = -points[i].y() * hScale;
        double x2 = points[i + 1].x() * wScale;
        double y2 = -points[i + 1].y() * hScale;

        // Рисуем линию между соседними точками
        painter1.drawLine(x1, y1, x2, y2);
    }

    // Рисуем маркеры на каждой точке
    for (const auto &point : points) {
        double x = point.x() * wScale;
        double y = -point.y() * hScale;

        // Небольшой квадратный маркер на точке
        double markerSize = 6; // Размер маркера (можно настроить)
        painter1.drawRect(x - markerSize / 2, y - markerSize / 2, markerSize, markerSize);
    }

    // Отрисовка осей координат
    painter1.setPen(QPen(Qt::black, 2)); // Более толстая линия для осей
    painter1.drawLine(-this->width() / 2, 0, this->width() / 2, 0); // Ось X
    painter1.drawLine(0, -this->height() / 2, 0, this->height() / 2); // Ось Y

    // Отрисовка сетки и меток
    QPainterPath text;
    QFont f("Times", 8);
    f.setStyleStrategy(QFont::ForceOutline);

    // Отрисовка вертикальной и горизонтальной сетки и меток по осям
    painter1.setPen(QPen(Qt::black, 1)); // Линии сетки будут тоньше
    for (int i = 1; i < this->width() / (wScale * 2); i++) {
        painter1.drawLine(-i * wScale, -this->height() / 2, -i * wScale, this->height() / 2); // Вертикальные линии
        painter1.drawLine(i * wScale, -this->height() / 2, i * wScale, this->height() / 2);
    }

    for (int i = 1; i < this->height() / (hScale * 2); i++) {
        painter1.drawLine(-this->width() / 2, -i * hScale, this->width() / 2, -i * hScale); // Горизонтальные линии
        painter1.drawLine(-this->width() / 2, i * hScale, this->width() / 2, i * hScale);
    }

    // Отрисовка цифр по осям
    painter1.setPen(QPen(Qt::black, 3));
    text.addText(0, 0, f, QString::number(0));
    for (int i = 1; i < this->width() / (wScale * 2); i++) {
        painter1.drawPoint(i * wScale, 0); // Метки на оси X
        text.addText(i * wScale, 12, f, QString::number(i));
        painter1.drawPoint(-i * wScale, 0);
        text.addText(-i * wScale, 12, f, QString::number(-i));
    }
    for (int i = 1; i < this->height() / (hScale * 2); i++) {
        painter1.drawPoint(0, i * hScale); // Метки на оси Y
        text.addText(0, -i * hScale, f, QString::number(i));
        painter1.drawPoint(0, -i * hScale);
        text.addText(0, i * hScale, f, QString::number(-i));
    }

    // Отрисовка текста
    painter1.setPen(QPen(Qt::black, 1));
    painter1.setBrush(QBrush(Qt::black));
    painter1.drawPath(text);
}

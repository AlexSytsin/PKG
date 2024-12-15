#ifndef CDA_H
#define CDA_H

#include <QWidget>
#include <QPainter>
#include <QPainterPath>
#include <vector>

class DDA : public QWidget
{
public:
    DDA(double x1, double y1, double x2, double y2, QWidget *parent = nullptr);

    void paintEvent(QPaintEvent*);

private:
    std::vector<QPointF> points;
};

#endif // CDA_H

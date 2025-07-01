#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(200,200);
}

Widget::~Widget() {}

//그림을 다시 그리는 순간 paintEvent 발생
void Widget::paintEvent(QPaintEvent *event)
{
    // QPainter *painter = new QPainter(this);
    // painter->setPen(QPen(Qt::blue,4,Qt::DashLine));
    // painter->drawPoint(100,100);

    // //사각형
    // painter->setPen(QPen(Qt::blue,5,Qt::SolidLine));
    // painter->drawRoundedRect(20,20,160,160,50,80);

    // //원
    // painter->setPen(QPen(Qt::red,5,Qt::SolidLine));
    // painter->drawEllipse(20,20,140,170);

    // //호
    // painter->setPen(QPen(Qt::yellow,5,Qt::DotLine));
    // painter->drawArc(20,20,160,160,30*16,150*16);

    // //현
    // painter->setPen(QPen(Qt::gray,3,Qt::SolidLine));
    // painter->drawChord(20,20,160,160,150*16,180*16);

    // //파이
    // painter->setPen(QPen(Qt::yellow,3,Qt::SolidLine));
    // painter->drawPie(20,20,160,160,200*16,250*16);

    // delete painter;

    // static const QPoint points[6] = {
    //     QPoint(20,20),
    //     QPoint(20,90),
    //     QPoint(90,80),
    //     QPoint(80,160),
    //     QPoint(160,80),
    //     QPoint(80,20)
    // };
    // painter->drawPolygon(points,6);

    // QVector<QPoint> pointsVector;
    // pointsVector << QPoint(20,20) << QPoint(20,90) \
    //              << QPoint(90,80) << QPoint(80,160) \
    //              << QPoint(160,80) << QPoint(80,20);
    // painter->drawPolygon(pointsVector);

    // QPen pen = painter->pen();
    // pen.setStyle(Qt::DotLine);
    // painter->setPen(pen);
    // painter->drawText(20,20,"Hello");

    // QFont font = painter->font();
    // font.setPixelSize(48);
    // painter->setFont(font);
    // painter->drawText(rect(),Qt::AlignCenter, tr("Qt"));

    QSvgWidget *svgw = new QSvgWidget("sample.svg");
    svgw->show();
}

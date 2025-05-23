#include "widget.h"
#include <QTimer>
#include <QTime>
Widget::Widget(QWidget *parent)
    : QLabel(parent)
{
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),SLOT(displayClock()));
    timer->start(4000);
    resize(90,40);
}
void Widget::displayClock(){
    setText(QTime::currentTime().toString());
}
Widget::~Widget() {}

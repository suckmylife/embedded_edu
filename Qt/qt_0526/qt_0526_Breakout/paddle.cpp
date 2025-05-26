#include "paddle.h"
#include <QPainter>
#define WIDTH 50
#define HEIGHT 12
Paddle::Paddle(QWidget *parent) :QWidget(parent)
{
    resize(WIDTH,HEIGHT);
    //setPixmap(QPixmap("paddle.png").scaled(WIDTH,HEIGHT));
    setStyleSheet("background-color : rgba(0,0,0,0)");
}

void Paddle::paintEvent(QPaintEvent*){
    QPainter p(this);
    p.setPen(QColor(Qt::transparent));
    p.setBrush(QColor(Qt::blue));
    p.drawRoundedRect(0,0,WIDTH,HEIGHT,5,5);
}
Paddle::~Paddle() {

}

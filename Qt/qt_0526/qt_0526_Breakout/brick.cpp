#include "brick.h"
#include <QPainter>
#define WIDTH 50
#define HEIGHT 12
Brick::Brick(QWidget *parent) : QWidget(parent)
{
    resize(WIDTH,HEIGHT);
    //setPixmap(QPixmap("brick.png").scaled(WIDTH,HEIGHT));
    setStyleSheet("background-color : rgba(0,0,0,0)");
}

void Brick::paintEvent(QPaintEvent*){
    QPainter p(this);
    p.setBrush(QColor(Qt::cyan));
    p.drawRect(0,0,WIDTH,HEIGHT);
}

Brick::~Brick() {

}

#include "widget.h"
#include <QCloseEvent>

Widget::Widget(QWidget *parent): QTextEdit(parent)
{
    setText(tr("Hello World"));
    resize(100,30);
}

void Widget::moveEvent(QMoveEvent*){
    setText(QString("X: %1, y : %2").arg(x()).arg(y()));
}

void Widget::closeEvent(QCloseEvent* event){
    event->ignore();
}

Widget::~Widget() {}

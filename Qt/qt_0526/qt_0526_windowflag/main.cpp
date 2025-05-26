#include "widget.h"

#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    QLabel *label = new QLabel(&w);
    label->resize(100,100);
    label->setCursor(Qt::CrossCursor);

    w.show();
    // QLabel *hello = new QLabel("Hello Qt!",0,Qt::Window
    //                                                | Qt::FramelessWindowHint
    //                                                | Qt::WindowStaysOnTopHint);
    // hello->show();

    return a.exec();
}

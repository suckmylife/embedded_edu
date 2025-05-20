#include "mainwindow.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel hello("<font color = blue>"\
                 "Hello <i>Qt!</i></font>",0);
    hello.show();
    // MainWindow w;
    // w.show();
    return a.exec();
}

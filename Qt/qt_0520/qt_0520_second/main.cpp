#include "widget.h"

#include <QApplication>
#include<QLabel>
#include<QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // QWidget w;
    // QLabel hello("<font color = blue>"\
    //              " Hello <i>Qt!</i></font>",&w);
    //hello.resize(75,35);
    //QPushButton quit("Quit",0);
    // QPushButton quit("Quit",&w);
    // quit.move(10,40);
    // quit.resize(75,35);

    //QObject::connect(&quit,SIGNAL(clicked()),&a,SLOT(quit()));
    //QObject::connect(&quit,&QPushButton::clicked,&hello,[&](){hello.setText("<b> Hi</b>");});

    // hello.resize(75,35);
    // hello.show();

    //25 page
    // Widget w;
    // w.show();

    //28page
    Widget w;
    // QLabel *label = new QLabel("<font color = blue>\
    //                Hello <i>Qt!</i></font>",&w);
    // label->setGeometry(10,90,75,35);
    QObject::connect(&w,SIGNAL(clicked()),&a,SLOT(quit()));
    w.show();
    return a.exec();
}

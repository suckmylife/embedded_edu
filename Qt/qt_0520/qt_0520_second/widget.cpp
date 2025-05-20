#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // QPushButton *quit = new QPushButton("Quit",this);
    // quit->resize(75,35);
    // QObject::connect(quit,SIGNAL(clicked()),qApp,SLOT(quit()));

    //28page
    // QPushButton *quit = new QPushButton("&Quit",this);
    // quit->move(10,10);
    // quit->resize(75,35);
    // QLabel *label = new QLabel("<font color = blue>\
    //                             Hello <i>Qt!</i></font>",this);
    // label->setGeometry(10,50,75,35);
    // QObject::connect(quit,SIGNAL(clicked()),qApp,SLOT(quit()));

    //33page
    QPushButton *quit = new QPushButton("&Quit",this);
    quit->resize(75,35);

    //39 page
    QLabel *label = new QLabel("<font color = blue>\
                                Hello <i>Qt!</i></font>",this);
    label->setGeometry(10,50,75,35);
    label->setObjectName("label1");


    QObject::connect(quit,SIGNAL(clicked()),this,SLOT(slotQuit()));
}

void Widget::slotQuit(){
    //qDebug("slot Quit");
    //qApp->quit();
    //emit clicked();
    //39page
    // QLabel *label = findChild<QLabel*>("label1");
    // qDebug("%s",qPrintable(label->metaObject()->className()));
    // label->setText("World");
}

Widget::~Widget() {}

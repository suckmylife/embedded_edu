#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //15 page
    // QPushButton *pushButton = new QPushButton();
    // pushButton->setText("Button1");
    // QPushButton *pushButton2 = new QPushButton("Button2");
    // QPushButton *pushButton3 = new QPushButton("Button3", this);

    // QHBoxLayout *hBoxLayout = new QHBoxLayout;
    // hBoxLayout->setContentsMargins(0,0,0,0);
    // hBoxLayout->addWidget(pushButton);
    // hBoxLayout->addWidget(pushButton2);
    // hBoxLayout->addWidget(pushButton3);
    // setLayout(hBoxLayout);

    //16 page
    // QPushButton *pushButton = new QPushButton();
    // pushButton->setText("Button1");
    // QPushButton *pushButton2 = new QPushButton("Button2");
    // QPushButton *pushButton3 = new QPushButton("Button3", this);

    // QVBoxLayout *vBoxLayout = new QVBoxLayout;
    // vBoxLayout->setContentsMargins(0,0,0,0);
    // vBoxLayout->addWidget(pushButton);
    // vBoxLayout->addWidget(pushButton2);
    // vBoxLayout->addWidget(pushButton3);
    // setLayout(vBoxLayout);

    //18 page
    // QGridLayout *gridLayout = new QGridLayout;
    // QPushButton *pushButton[NO_OF_ROW*NO_OF_ROW];
    // for(int y = 0; y<NO_OF_ROW; y++){
    //     for(int x = 0; x<NO_OF_ROW; x++){
    //         int p = x*y*NO_OF_ROW;
    //         QString str = QString("Button%1").arg(x+1+y*NO_OF_ROW);
    //         pushButton[p] = new QPushButton(str,this);
    //         gridLayout->addWidget(pushButton[p],x,y);
    //     }
    // }
    // setLayout(gridLayout);

    //19page
    // QDial *dial = new QDial(this);
    // dial->setRange(0,2);

    // QLabel *label = new QLabel("stack 1",this);
    // QCalendarWidget *calendarWidget = new QCalendarWidget(this);
    // QTextEdit *textEdit = new QTextEdit("Stack 3", this);
    // QStackedLayout *stackedLayout = new QStackedLayout();
    // stackedLayout->addWidget(label);
    // stackedLayout->addWidget(calendarWidget);
    // stackedLayout->addWidget(textEdit);

    // connect(dial,&QDial::valueChanged,\
    //         stackedLayout,&QStackedLayout::setCurrentIndex
    //         );
    // QHBoxLayout *hBoxLayout = new QHBoxLayout(this);
    // hBoxLayout->addWidget(dial);
    // hBoxLayout->addLayout(stackedLayout);
    // setLayout(hBoxLayout);

}

Widget::~Widget() {}

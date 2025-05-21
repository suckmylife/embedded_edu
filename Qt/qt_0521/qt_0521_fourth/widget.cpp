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

    //28page
    // QStringList labels;
    // labels << "&IP Address" << "&MAC Address" << "&Date";
    // QLineEdit* lineEdit[3];
    // QFormLayout *formLayout = new QFormLayout;
    // for(int i = 0; i< 3; i++){
    //     lineEdit[i] = new QLineEdit(this);
    //     formLayout->addRow(labels.at(i),lineEdit[i]);
    // }
    // QGroupBox *groupBox = new QGroupBox("&Widget Group",this);
    // groupBox->move(5,5);
    // groupBox->setLayout(formLayout);
    // resize(groupBox->sizeHint().width()+10,
    //        groupBox->sizeHint().height()+10);

    //31page
    // QDial *dial = new QDial(this);
    // QCalendarWidget *calendarWidget = new QCalendarWidget(this);
    // QTextEdit *textEdit = new QTextEdit("Tab 3", this);

    // QTabWidget *tabWidget = new QTabWidget(this);
    // tabWidget->addTab(dial,"Tab &1");
    // tabWidget->addTab(calendarWidget, "Tab2 &2");
    // tabWidget->addTab(textEdit, "Tab &3");

    // resize(tabWidget->sizeHint());

    //34 page
    // QLabel *label = new QLabel("&Value",this);
    // QDial *dial1 = new QDial(this);
    // QDial *dial2 = new QDial(this);
    // label->setBuddy(dial2);

    // QSplitter *splitter = new QSplitter(this);
    // splitter->addWidget(label);
    // splitter->addWidget(dial1);
    // splitter->addWidget(dial2);

    // resize(splitter->sizeHint());


}

Widget::~Widget() {}

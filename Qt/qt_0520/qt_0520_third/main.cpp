#include "widget.h"

#include <QApplication>
#include<QLCDNumber>
#include<QProgressBar>
#include<QTimer>
#include<QTextBrowser>
#include<QUrl>
#include<QPushButton>
#include<QSlider>
#include<QStyleFactory>
#include<QScrollArea>
#include<QScrollBar>
#include<QLabel>
#include<QDial>
#include<QSpinBox>
#include<QTime>
#include<QTimeEdit>
#include<QDate>
#include<QDateEdit>
#include<QLineEdit>
#include<QComboBox>
#include<QValidator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //12page
    // QLCDNumber *lcd = new QLCDNumber();
    // lcd->setSegmentStyle(QLCDNumber::Flat);
    // //lcd->setBinMode();
    // lcd->display(2002);
    // //lcd->setDigitCount(15);
    // lcd->show();

    //14page
    // QProgressBar *progBar = new QProgressBar();
    // progBar->setValue(0);
    // progBar->setInvertedAppearance(true);
    // progBar->show();

    //15page
    // QTimer timer;
    // int n = 0;
    // QObject::connect(&timer,&QTimer::timeout,
    //                  [&]{progBar->setValue(++n%101);});
    // timer.start(10);

    //17page
    // QTextBrowser *tb = new QTextBrowser();
    // tb->setSource(QUrl("index.html"));
    // tb->show();

    //22page
    // QPushButton *pushButton = new QPushButton("Push&Button",0);
    // pushButton->setCheckable(true);
    // QObject::connect(pushButton,&QPushButton::toggled,
    //                  [&](bool flag){qDebug()<<"toggled";
    //                 if(!flag)a.quit();});
    // pushButton->show();

    //33page
    // QSlider *slider = new QSlider();
    // slider->setOrientation(Qt::Horizontal);
    // slider->setTickPosition(QSlider::TicksAbove);
    // slider->setStyle(QStyleFactory::create("Fusion"));
    // slider->show();

    //35page
    // QLabel *label = new QLabel("12345678910111213141516171819202122232425262728293031323334353637383940");
    // QScrollArea *scrollArea = new QScrollArea;
    // scrollArea->setBackgroundRole(QPalette::Dark);
    // scrollArea->setWidget(label);
    // scrollArea->resize(60,30);
    // scrollArea->show();
    // QScrollBar *slider = scrollArea->horizontalScrollBar();
    // slider->setValue(slider->maximum());

    //37page
    // QDial *dial = new QDial();
    // dial->setWrapping(true);
    // dial->setNotchesVisible(true);
    // dial->setNotchTarget(10);
    // dial->show();

    //39page
    // QSpinBox *spinBox = new QSpinBox();
    // spinBox->setRange(0,10);
    // spinBox->setSuffix("%");
    // spinBox->setWrapping(true);
    // spinBox->setSpecialValueText("Percent");
    // spinBox->show();

    //miniproject
    // Widget w;
    // QSpinBox *spinBox = new QSpinBox(&w);
    // spinBox->setRange(0,100);
    // spinBox->setGeometry(20,10,100,15);
    // spinBox->setSuffix("%");
    // spinBox->setWrapping(true);
    // spinBox->setSpecialValueText("Percent");
    // QDial *dial = new QDial(&w);
    // dial->setWrapping(true);
    // dial->setGeometry(10,60,50,50);
    // dial->setNotchesVisible(true);
    // dial->setNotchTarget(10);
    // QObject::connect(dial,SIGNAL(valueChanged(int)),spinBox,SLOT(setValue(int)));
    // QObject::connect(spinBox,SIGNAL(valueChanged(int)),dial,SLOT(setValue(int)));
    //w.show();

    //48page
    // QTimeEdit *timeEdit = new QTimeEdit(0);
    // timeEdit->setTime(QTime::currentTime());
    // timeEdit->show();
    // QDateEdit *dateEdit = new QDateEdit(QDate::currentDate(),0);
    // dateEdit->setCalendarPopup(true);
    // dateEdit->show();

    //51page
    // QLineEdit *lineEdit = new QLineEdit();
    // lineEdit->setEchoMode(QLineEdit::Password);
    // lineEdit->setGeometry(100,100,100,20);
    // lineEdit->setInputMask("000");
    // lineEdit->setPlaceholderText("input the number");
    // lineEdit->show();

    //55page
    // QComboBox *comboBox = new QComboBox();
    // comboBox->addItem("KDE");
    // comboBox->addItem("Gnome");
    // comboBox->addItem("FVWM");
    // comboBox->addItem("CDE");
    // comboBox->setEditable(true); //콤보박스 추가
    // comboBox->show();

    //61page


    Widget w;
    w.show();
    return a.exec();
}

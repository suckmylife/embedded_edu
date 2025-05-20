#include "widget.h"
#include<QRadioButton>
#include<QButtonGroup>
#include<QCheckBox>
#include<QLabel>
#include<QValidator>
#include <QLineEdit>
#include<QFormLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //25page
    // resize(140,110);
    // buttonGroup = new QButtonGroup(this);
    // for(int i =0; i<4; i++){
    //     QString str = QString("RadioButton%1").arg(i+1);
    //     radioButton[i] = new QRadioButton(str,this);
    //     radioButton[i]->move(10,10+20*i);
    //     buttonGroup->addButton(radioButton[i]);
    // }

    //27page
    // resize(140,110);
    // buttonGroup = new QButtonGroup(this);
    // buttonGroup->setExclusive(false);
    // label = new QLabel("None",this);
    // label->move(10,10);

    // for(int i =0; i<4; i++){
    //     QString str = QString("CheckBox%1").arg(i+1);
    //     checkBox[i] = new QCheckBox(str,this);
    //     checkBox[i]->move(10,30+20*i);
    //     buttonGroup->addButton(checkBox[i]);
    // }

    // connect(buttonGroup, SIGNAL(idClicked(int)),SLOT(selectButton(int)));
    // connect(buttonGroup, &QButtonGroup::idClicked,
    //         [=](int id)mutable{label->setText(QString::number(id+1));});

    //61page
    QDoubleValidator *doubleValidator = new QDoubleValidator(this);
    doubleValidator->setRange(10.0,100.0,3);
    doubleValidator->setBottom(10.0);
    doubleValidator->setTop(100.0);
    doubleValidator->setDecimals(3);
    QIntValidator *intValidator = new QIntValidator(this);
    intValidator->setRange(13,19);
    intValidator->setBottom(13);
    intValidator->setTop(19);

    QRegularExpression re("&\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}$");
    QRegularExpressionValidator *regExpValidator=
        new QRegularExpressionValidator(re,this);



    QLineEdit * lineEditDouble = new QLineEdit(this);
    lineEditDouble->setValidator(doubleValidator);

    QLineEdit * lineEditInt = new QLineEdit(this);
    lineEditInt->setValidator(intValidator);

    QLineEdit * lineEditRegExp = new QLineEdit(this);
    lineEditInt->setValidator(regExpValidator);

    lineEditRegExp->setInputMask("000.000.000.000;_");

    QFormLayout *formLayout = new QFormLayout(this);
    formLayout->addRow("&Double",lineEditDouble);
    formLayout->addRow("&int",lineEditInt);
    formLayout->addRow("&Regular Expression",lineEditRegExp);
    setWindowTitle("Validator");
}

void Widget::selectButton(int id){
    QButtonGroup *buttonGroup = (QButtonGroup*)sender();
    QCheckBox *button = (QCheckBox*)buttonGroup->button(id);
    //QCheckBox *button = dynamic_cast<QCheckBox*>buttonGroup->button(id);
    qDebug("CheckBox%d is selected(%s)",id+1,
           (button->isChecked())?"On":"Off");
}

Widget::~Widget() {}

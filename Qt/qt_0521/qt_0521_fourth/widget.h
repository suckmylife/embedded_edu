#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QHBoxLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QDial>
#include<QLabel>
#include<QCalendarWidget>
#include<QTextEdit>
#include<QStackedLayout>
#include<QGroupBox>
#include<QFormLayout>
#include<QtWidgets>
#include<QTabWidget>
#include<QToolBox>
#include<QSplitter>

#define NO_OF_ROW 3
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H

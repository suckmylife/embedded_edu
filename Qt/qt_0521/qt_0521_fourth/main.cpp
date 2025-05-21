#include "widget.h"

#include <QApplication>
#include<QToolBox>
#include<QDial>
#include<QCalendarWidget>
#include<QTextEdit>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //32 page
    // QToolBox toolBox;
    // toolBox.resize(300,380);
    // toolBox.show();

    // QDial *dial = new QDial(&toolBox);
    // QCalendarWidget *calendarWidget = new QCalendarWidget(&toolBox);
    // QTextEdit *textEdit = new QTextEdit("QTextEdit", &toolBox);
    // toolBox.addItem(&dial,"Page &1");
    // toolBox.addItem(&calendarWidget, "Page &2");
    //toolBox.addItem(&textEdit, "Page &3");
    // toolBox.addItem(&dial,"Page &1");
    // toolBox.addItem(&calendarWidget, "Page &2");
    // toolBox.addItem(&textEdit, "Page &3");

    Widget w;
    w.show();
    return a.exec();
}

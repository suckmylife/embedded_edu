#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QApplication>
#include<QPushButton>
#include <QLabel>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void slotQuit();
signals:
    void clicked();
};
#endif // WIDGET_H

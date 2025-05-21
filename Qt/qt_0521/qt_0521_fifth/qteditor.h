#ifndef QTEDITOR_H
#define QTEDITOR_H

#include <QMainWindow>
#include <QTextEdit>
#include <QMenuBar>
#include<QMenu>
#include<QAction>
#include <QApplication>
#include<QKeySequence>
#include<QToolBar>
#include<QFontComboBox>
#include<QTextEdit>
#include<QDoubleSpinBox>
#include<QFont>
#include<QStatusBar>
#include<QLabel>

class QtEditor : public QMainWindow
{
    Q_OBJECT

public:
    QtEditor(QWidget *parent = nullptr);
    ~QtEditor();

private:
    QTextEdit *textedit;
    template<typename T>
    QAction *makeAction(QString icon, QString text,T ShortCut,\
                        QString toolTip, QObject* recv,const char* slot);
    template <>
    QAction *makeAction(QString icon, QString text, \
                        const char* shortCut, QString toolTip, \
                        QObject* recv, const char* slot);
    template<typename T, typename Functor>
    QAction *makeAction(QString icon, QString text, T shortCut,\
                        QString toolTip,Functor lambda);
public slots:
    void newFile();
    void open();
    void save();
    void print();
    void saveas();
};
#endif // QTEDITOR_H

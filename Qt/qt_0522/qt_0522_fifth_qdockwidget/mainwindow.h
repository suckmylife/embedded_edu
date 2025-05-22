#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QDoubleSpinBox>
#include<QFont>
#include<QStatusBar>
#include<QLabel>
#include <QTextEdit>
#include <QMenuBar>
#include<QMenu>
#include<QAction>
#include <QApplication>
#include<QKeySequence>
#include<QToolBar>
#include<QFontComboBox>
#include<QDockWidget>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>
#include <QPrinter>
#include <QPrintDialog>
#include <QHash>
#include <QFileInfo>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QTextEdit *textedit;
    QTextEdit *textedit_dock;

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

    QMdiArea *mdiArea;
    QFontComboBox *fontComboBox;
    QDoubleSpinBox *sizeSpinBox;
    QTextEdit *setText_Mdi();
    QList<QAction*>actions;
    QTextEdit *prevTextEdit = nullptr;
    QMenu *fileMenu;

    //28page
    QHash<QAction*,QWidget*>windowHash;
    QMenu *winMenu;

public slots:
    void newFile();
    void open();
    void save();
    void print();
    void saveas();
    QTextEdit *m_newFile();
    void setColor();
    void setFont();

    void setFontWidget();
    void connectWindow(QMdiSubWindow*);
    void Info();
    //void setTextFont(QFont font);
    //void setTextSize(qreal size);
};
#endif // MAINWINDOW_H

#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QString>
#include <QPushButton>
#include <QTranslator>

#ifdef Q_OS_WIN
#define kor(str) QString::fromUtf8(str)
#else
#define kor(str) QString::fromLocal8Bit(str)
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //14page
    //QLabel *hello = new QLabel(kor("<font color=blue>안녕<i>Qt!</i></font>"),0);
    //QLabel *hello = new QLabel("<font color=blue>안녕<i>Qt!</i></font>",0);
    // QLabel *hello = new QLabel(kor("<font color=blue>안녕<i>Qt!</i></font>"),0);
    // hello->show();
    // hello->resize(75,35);

    //21page
    // QString lang = QLocale::system().uiLanguages().first();
    // QTranslator translator;
    // if(translator.load("hello_ko"))
    //     a.installTranslator(&translator);
    // //translator.load("hello_"+lang.left(2));

    // QPushButton hello(QObject::tr("Hello World"));
    // hello.resize(100,30);
    // hello.show();

    return a.exec();
}

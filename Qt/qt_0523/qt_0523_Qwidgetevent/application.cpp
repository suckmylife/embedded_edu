#include "application.h"
#include "widget.h"
Application::Application(int &argc, char **argv)
    : QApplication(argc,argv)
{

}

bool Application:: notify(QObject *receiver, QEvent *e){
    qDebug() << "Application : notify called : " <<e->type();
    if(e->type() == QEvent::MouseButtonPress){
        qDebug() << "Application : mouse event";
        return false;
    }
    Widget *obj = dynamic_cast<Widget*>(receiver);
    if(obj != nullptr){
        qDebug() << "Cast Successful: " <<obj->metaObject()->className();

    }else{
        qDebug()<<"Cast Failed";
    }
    return QApplication::notify(receiver,e);
}

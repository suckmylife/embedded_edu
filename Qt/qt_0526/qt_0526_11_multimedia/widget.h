#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
//15page
#include <QtMultimedia>
#include <QVideoWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    //15page
    QMediaPlayer *m_player;
    QAudioOutput *m_audioOutput;
    QVideoWidget *m_videoWidget;
};
#endif // WIDGET_H

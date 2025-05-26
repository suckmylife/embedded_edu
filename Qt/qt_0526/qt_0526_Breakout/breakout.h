#ifndef BREAKOUT_H
#define BREAKOUT_H

#include <QWidget>
#include <QMouseEvent>
#include <QKeyEvent>
//33page
#include <QMediaPlayer>
//12장22page
#include "ball.h"
#include "brick.h"
#include "paddle.h"
class QLabel;

class Breakout : public QWidget
{
    Q_OBJECT
private:
    static const int NO_OF_BRICKS = 30;
    Ball *ball;
    Paddle *paddle;
    Brick *bricks[NO_OF_BRICKS];
    QLabel *score_;
    QLabel *life;
    QString L ="";
    int timerId;
    int xDir,yDir;
    int score;
    int lifeCycle;
    bool isCollision;
    //33page
    QMediaPlayer *bgPlayer;
    QMediaPlayer *effectPlayer;

public:
    Breakout(QWidget *parent = nullptr);
    ~Breakout();

protected:
    void keyPressEvent(QKeyEvent*)override;
    void mouseMoveEvent(QMouseEvent* e) override;
    static const int MOVE_SPEED = 3;
    void timerEvent(QTimerEvent*) override;
    void moveObjects();
    //39page
    void checkCollision();

};
#endif // BREAKOUT_H

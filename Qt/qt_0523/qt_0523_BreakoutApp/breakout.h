#ifndef BREAKOUT_H
#define BREAKOUT_H

#include <QWidget>
#include <QMouseEvent>
#include <QKeyEvent>

class QLabel;

class Breakout : public QWidget
{
    Q_OBJECT
private:
    static const int NO_OF_BRICKS = 30;
    QLabel *ball;
    QLabel *paddle;
    QLabel *bricks[NO_OF_BRICKS];
    QLabel *score_;
    int timerId;
    int xDir,yDir;
    int score;
    bool isCollision;
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

#include "breakout.h"
#include <QLabel>
#include <QApplication>
#include <QtMultimedia>
#define WIDTH 50
#define HEIGHT 12
#define SCR_WIDTH 300
#define SCR_HEIGHT 400

Breakout::Breakout(QWidget *parent)
    : QWidget(parent),xDir(1),yDir(-1),score(0),isCollision(false),lifeCycle(3)
{
    score_ = new QLabel(this);
    score_->setGeometry(100,100,SCR_WIDTH/2,SCR_HEIGHT/2);
    life = new QLabel(this);
    life->setGeometry(100,100,SCR_WIDTH/3,SCR_HEIGHT/3);
    ball = new Ball(this);
    ball->setGeometry(SCR_WIDTH*0.8,SCR_HEIGHT*0.875,10,10);

    paddle = new Paddle(this);
    paddle->setGeometry(SCR_WIDTH*0.7,SCR_HEIGHT*0.9,WIDTH,HEIGHT);

    for(int y = 0,i=0; y < 5; y++)
        for(int x = 0; x<6; x++,i++){
            bricks[i] = new Brick(this);
            bricks[i]->setGeometry(x*WIDTH,y*HEIGHT+30,WIDTH,HEIGHT);
        }
    resize(SCR_WIDTH,SCR_HEIGHT);
    setMouseTracking(true);
    timerId = startTimer(10);

    //33page
    QAudioOutput *bgAudioOutput = new QAudioOutput;
    bgAudioOutput->setVolume(10);

    bgPlayer = new QMediaPlayer();
    bgPlayer->setAudioOutput(bgAudioOutput);
    bgPlayer->setLoops(QMediaPlayer::Infinite);
    bgPlayer->setSource(QUrl::fromLocalFile(QFileInfo("background.wav").absoluteFilePath()));
    bgPlayer->play();

    QAudioOutput *bgEffectOutput = new QAudioOutput;
    bgEffectOutput->setVolume(200);

    effectPlayer = new QMediaPlayer();
    effectPlayer->setAudioOutput(bgEffectOutput);
    effectPlayer->setLoops(QMediaPlayer::Once);
    effectPlayer->setSource(QUrl::fromLocalFile(QFileInfo("effect.wav").absoluteFilePath()));

}
void Breakout::keyPressEvent(QKeyEvent* e){
    switch(e->key()){
    case Qt::Key_Left:
        if( (paddle->x()) >0){
            paddle->move(paddle->x()-MOVE_SPEED,paddle->y());
        }
        break;
    case Qt::Key_Right:
        if( (paddle->x()+WIDTH) < width()){
            paddle->move(paddle->x()+MOVE_SPEED,paddle->y());
        }
        break;
    case Qt::Key_Escape:
        qApp->exit();
        break;
    default:
        QWidget::keyPressEvent(e);
    }
}
void Breakout::mouseMoveEvent(QMouseEvent* e){
    int x = e->pos().x();
    x=(x<0)?0:(x+WIDTH>width())?width()-WIDTH:x;
    paddle->move(x,paddle->y());
}

void Breakout::timerEvent(QTimerEvent*){
    moveObjects();
    //43page
    checkCollision();
    if(isCollision) {score++; isCollision= false;}
    L = "";
    for(int i =0; i<lifeCycle; i++)
        L+="●";
    if(lifeCycle>0)
    {
        score_->setText("Score : "+QString::number(score));
        life->setText("Life : "+L);
    }
}

void Breakout::moveObjects(){
    ball->move(ball->x()+xDir,ball->y()+yDir);
    if(ball->x()<=0||(ball->x()+10)>SCR_WIDTH)
        xDir *=-1;
    if(ball->y()<=0) yDir=1;
}

void Breakout::checkCollision(){
    if(ball->geometry().bottom()>height()){

        //qDebug("Game lost");
        --lifeCycle;
        if(lifeCycle ==0){
            killTimer(timerId);
            score_->setText("Game lost");
            life->setText("Life : ");
        }else{
            ball->move(100,100);
        }

    }
    int j = 0;
    for(int i = 0; i< NO_OF_BRICKS; i++){
        if(bricks[i]->isHidden())j++;
    }
    if(j==NO_OF_BRICKS){
        killTimer(timerId);
        qDebug("Victory");
        life->setText("Game Victory");
    }

    //사용자와 충돌처리 (아래 바)
    if((ball->geometry()).intersects(paddle->geometry())){
        int paddleLPos = paddle->geometry().left();
        int ballLPos = ball->geometry().left();
        int first = paddleLPos +8;
        int second = paddleLPos + 16;
        int third = paddleLPos + 24;
        int fourth = paddleLPos + 32;

        //공이 맞고 나가는 방향 조정
        if(ballLPos < first) {xDir = -1; yDir=-1;}
        if(ballLPos >= first && ballLPos < second){ xDir = -1; yDir*=-1;};
        if(ballLPos >= second && ballLPos < third){ xDir = 0; yDir=-1;};
        if(ballLPos >= third && ballLPos < fourth){ xDir = 1; yDir*=-1;};
        if(ballLPos > fourth) {xDir = 1; yDir=-1;}
        effectPlayer->stop();
        effectPlayer->play();
    }

    //블록 충돌처리
    for(int i =0; i< NO_OF_BRICKS; i++){
        if((ball->geometry()).intersects(bricks[i]->geometry())){

            int ballLeft = ball->geometry().left();
            int ballHeight = ball->geometry().height();
            int ballWidth = ball->geometry().width();
            int ballTop = ball->geometry().top();
            //현재 블록위치
            QPoint pointRight(ballLeft + ballWidth +1,ballTop);
            QPoint pointLeft(ballLeft -1,ballTop);
            QPoint pointTop(ballLeft,ballTop-1);
            QPoint pointBottom(ballLeft,ballTop+ballHeight+1);
            //공과 블록의 충돌검사
            if(!bricks[i]->isHidden()){
                if(bricks[i]->geometry().contains(pointRight)) {xDir = -1;}
                else if(bricks[i]->geometry().contains(pointLeft)) {xDir = 1; }
                if(bricks[i]->geometry().contains(pointTop)){yDir = 1;}
                else if(bricks[i]->geometry().contains(pointBottom)){yDir = -1;}
                bricks[i]->setHidden(true);
                effectPlayer->stop();
                effectPlayer->play();
                //충돌 시점 감지
                isCollision = true;
                break;
            }
        }
    }

}


Breakout::~Breakout() {
    delete ball;
    delete paddle;
    for(int i =0; i<NO_OF_BRICKS; i++){
        delete bricks[i];
    }
}

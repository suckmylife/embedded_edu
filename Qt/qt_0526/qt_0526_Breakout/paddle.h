#ifndef PADDLE_H
#define PADDLE_H
#include <QWidget>
#include <QLabel>
class Paddle: public QWidget
{
public:
    Paddle(QWidget *parent = nullptr);
    ~Paddle();

private:
    void paintEvent(QPaintEvent*)override;
};

#endif // PADDLE_H

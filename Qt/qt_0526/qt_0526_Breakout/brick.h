#ifndef BRICK_H
#define BRICK_H

#include <QWidget>

class Brick : public QWidget
{
public:
    Brick(QWidget *parent = nullptr);
    ~Brick();

private:
    void paintEvent(QPaintEvent*)override;
};

#endif // BRICK_H

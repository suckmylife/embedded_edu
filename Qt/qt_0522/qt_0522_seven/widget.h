#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDir>
#include <QListWidget>
#include <QListWidgetItem>
#include <QLineEdit>
#include <QTextEdit>
#include <QMenu>
#include <QContextMenuEvent>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFile>
#include <QFileInfo>

#include <QTextStream>
#include <QMessageBox>

class Widget : public QWidget
{
    Q_OBJECT
protected:
    void contextMenuEvent(QContextMenuEvent*);
private:
    void refreshDir();
    QDir *directory;
    QListWidget *dirListWidget;
    QLineEdit *filenameLineEdit;
    QTextEdit *outputEdit;
    QMenu *m_menu;
public slots:
    void selectItem(QListWidgetItem*);
    void changeDir();
    void copyFile();
    void makeDir();
    void removeDir();
    void renameDir();

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H

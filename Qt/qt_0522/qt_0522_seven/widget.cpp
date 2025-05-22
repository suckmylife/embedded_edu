#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    directory = new QDir(".");
    QAction *mkdirAction = new QAction("&Make Directory",this);
    connect(mkdirAction,SIGNAL(triggered()),SLOT(makeDir()));
    QAction *copyAction = new QAction("&Copy",this);
    connect(copyAction,SIGNAL(triggered()),SLOT(copyFile()));
    QAction *removeAction = new QAction("&Remove",this);
    connect(removeAction,SIGNAL(triggered()),SLOT(removeDir()));
    QAction *renameAction = new QAction("&Rename",this);
    connect(renameAction,SIGNAL(triggered()),SLOT(renameDir()));
    QAction *quitAction = new QAction("&Quit",this);
    connect(quitAction,SIGNAL(triggered()),qApp,SLOT(quit()));

    m_menu = new QMenu(this);
    m_menu->addSection("&Directory");
    m_menu->addAction(mkdirAction);
    m_menu->addSeparator();
    m_menu->addSection("&File");
    m_menu->addAction(copyAction);
    m_menu->addAction(removeAction);
    m_menu->addAction(renameAction);
    m_menu->addSeparator();
    m_menu->addAction(quitAction);

    dirListWidget = new QListWidget(this);
    filenameLineEdit = new QLineEdit(this);

    outputEdit = new QTextEdit(this);
    outputEdit->setReadOnly(true);

    QPushButton *actionButton = new QPushButton("Action",this);
    actionButton->setMenu(m_menu);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(dirListWidget);
    layout->addWidget(filenameLineEdit);
    layout->addWidget(outputEdit);
    layout->addWidget(actionButton);

    connect(dirListWidget,SIGNAL(itemClicked(QListWidgetItem*)),\
            SLOT(selectItem(QListWidgetItem*)));
    connect(dirListWidget,SIGNAL(itemClicked(QListWidgetItem*)),\
            SLOT(changeDir()));
    refreshDir();

}

Widget::~Widget() {}

void Widget::refreshDir(){
    dirListWidget->clear();
    for(int index = 0; index < directory->entryList().count(); index++){
        dirListWidget->addItem(directory->entryList().at(index));
    };
}

void Widget::selectItem(QListWidgetItem* Item){
    filenameLineEdit->setText(Item->text());
}
void Widget::copyFile(){
    QString filename = directory->absoluteFilePath(dirListWidget->currentItem()->text());
    QFileInfo checkDir(filename);
    if(checkDir.isFile() && filenameLineEdit->text().length()){
        QString newFile = directory->absoluteFilePath(filenameLineEdit->text());
        QFile::copy(filename,newFile);
    }
    directory->refresh();
    refreshDir();
}

void Widget::changeDir(){
    QString filename = directory->absoluteFilePath(dirListWidget->currentItem()->text());
    QFileInfo checkDir(filename);
    if(checkDir.isDir()){
        directory->cd(filename);
        //directory->refresh();
        refreshDir();
    }else if(checkDir.isFile()){
        if(checkDir.isReadable()){
            QFile file(filename);
            file.open(QFile::ReadOnly);
            QTextStream in(&file);

            outputEdit->setWindowTitle(filename);
            outputEdit->clear();
            QString line;
            while(in.readLineInto(&line))
                outputEdit->append(line);
            file.close();
        }else{
            QMessageBox::warning(this,"Error","Can't Read this file");
        }
    }
}

void Widget::makeDir(){
    if(filenameLineEdit->text().length()){
        directory->mkdir(filenameLineEdit->text());
        directory->refresh();
        refreshDir();
    }
}

void Widget::removeDir(){
    if(filenameLineEdit->text().length()&& dirListWidget->currentItem() != NULL){
        QString filename = directory->absoluteFilePath(dirListWidget->currentItem()->text());
        QFileInfo checkDir(filename);
        if(checkDir.isDir()){
            directory->rmdir(filenameLineEdit->text());
        }else if(checkDir.isFile()){
            QFile::remove(filename);
        }
        directory->refresh();
        refreshDir();
    }
}

void Widget::renameDir(){
    if(filenameLineEdit->text().length()&& dirListWidget->currentItem() != NULL){
        directory->rename(dirListWidget->currentItem()->text(),filenameLineEdit->text());
        directory->refresh();
        refreshDir();
    }
}
void Widget::contextMenuEvent(QContextMenuEvent* event){
    QWidget::contextMenuEvent(event);
    m_menu->exec(QCursor::pos());
}

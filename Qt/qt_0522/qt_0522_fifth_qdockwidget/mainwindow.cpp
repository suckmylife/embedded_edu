#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //48page
    mdiArea = new QMdiArea(this);
    //53page
    QMdiSubWindow *activeSub = mdiArea->activeSubWindow();//subWindowActivated의 널값 잡기위한 것 모든 서브 창 닫을때 일어나는 크래시 방지
    if (activeSub){
    connect(mdiArea,SIGNAL(subWindowActivated(QMdiSubWindow*)),
            SLOT(setFontWidget()));
    }
    setCentralWidget(mdiArea);

    //25page
    QMenuBar *menuebar = new QMenuBar(this);
    setMenuBar(menuebar);
    QAction *newAct = makeAction("new.png",tr("&New"),QKeySequence::New,\
                                 tr("make new file"),this,SLOT(newFile()));
    QAction *quitAct = makeAction("quit.png",tr("&Quit"),tr("Ctrl+Q"),\
                                  tr("Quit this program"),qApp,SLOT(quit()));
    QAction *openAct = makeAction("open.png",tr("&Open"),QKeySequence::Open,\
                                  tr("Open this program"),this,SLOT(open()));
    QAction *saveAct = makeAction("save.png",tr("&Save"),QKeySequence::Save,\
                                  tr("Save this program"),this,SLOT(save()));
    QAction *printAct = makeAction("print.png",tr("&Print"),QKeySequence::Print,\
                                   tr("Print program"),this,SLOT(print()));
    QAction *saveasAct = makeAction("saveas.png",tr("&Saveas"),QKeySequence::SaveAs,\
                                    tr("Save As this program"),this,SLOT(saveas()));
    fileMenu = menuebar->addMenu("&File");
    fileMenu->addAction(newAct);
    fileMenu->addAction(quitAct);
    fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
    fileMenu->addAction(printAct);
    fileMenu->addAction(saveasAct);

    // windowAct = new QAction("This is New File", fileMenu);
    // fileMenu->addAction(windowAct);

    QToolBar *fileToolBar = addToolBar("&File");
    fileToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    fileToolBar->addAction(quitAct);

    QMenu *windowMenu = menuebar->addMenu("&Window");
    QMenu *toolbarMenu = windowMenu->addMenu("&Toolbar");
    toolbarMenu->addAction(fileToolBar->toggleViewAction());
    //32 page
    fontComboBox = new QFontComboBox(this);
    //QTextEdit *textedit = new QTextEdit(this);
    //textedit = new QTextEdit(this);
    //setCentralWidget(textedit);
    sizeSpinBox = new QDoubleSpinBox(this);

    // connect(fontComboBox, SIGNAL(currentFontChanged(QFont)),
    //         SLOT(setTextFont(QFont)));
    // connect(sizeSpinBox, SIGNAL(valueChanged(double)),
    //         SLOT(setTextSize(qreal)));
    connect(fontComboBox, &QFontComboBox::currentFontChanged,
            [=](const QFont &font){
            QTextEdit *textedit = setText_Mdi();
                textedit->setCurrentFont(font);
    });
    connect(sizeSpinBox, &QDoubleSpinBox::valueChanged,
            [=](const qreal &size){
        QTextEdit *textedit = setText_Mdi();
        QFont font = textedit->currentFont();
        font.setPointSize(size);
        textedit->setCurrentFont(font);
    });

    addToolBarBreak();

    QToolBar *formatToolbar = addToolBar("&Format");
    formatToolbar->addSeparator();
    formatToolbar->addWidget(fontComboBox);
    formatToolbar->addWidget(sizeSpinBox);
    //37 page
    QStatusBar *statusbar = statusBar();
    QLabel *statusLabel = new QLabel(tr("Qt Editor"),statusbar);
    statusLabel->setObjectName("StatusLabel");
    statusbar->addPermanentWidget(statusLabel);
    statusbar->showMessage("started",1500);

    //38page
    QAction *undoAct = makeAction("undo.png",tr("&Undo"),QKeySequence::Undo,\
                                  tr("Undo text"),[=](){QTextEdit *textedit = setText_Mdi();
                                                        textedit->undo();});
    QAction *RedoAct = makeAction("redo.png",tr("&Redo"),QKeySequence::Redo,\
                                  tr("Redo text"),[=](){QTextEdit *textedit = setText_Mdi();
                                                        textedit->redo();});
    QAction *copyAct = makeAction("copy.png",tr("&Copy"),QKeySequence::Copy,\
                                  tr("Copy text"),[=](){QTextEdit *textedit = setText_Mdi();textedit->copy();});
    QAction *cutAct = makeAction("cut.png",tr("&Cut"),QKeySequence::Cut,\
                                 tr("Cut text"),[=](){QTextEdit *textedit = setText_Mdi();textedit->cut();});
    QAction *pasteAct = makeAction("paste.png",tr("&Paste"),QKeySequence::Paste,\
                                   tr("Paste program"),[=](){QTextEdit *textedit = setText_Mdi();textedit->paste();});
    QAction *zoomInAct = makeAction("zoomin.png",tr("&ZoomIn"),QKeySequence::ZoomIn,\
                                    tr("Zoom In"),[=](){QTextEdit *textedit = setText_Mdi();textedit->zoomIn();});
    QAction *zoomOutAct = makeAction("zoomout.png",tr("&ZoomOut"),QKeySequence::ZoomOut,\
                                     tr("Zoom out"),[=](){QTextEdit *textedit = setText_Mdi();textedit->zoomOut();});
    QMenu *editMenu = menuebar->addMenu("&Edit");
    editMenu->addAction(undoAct);
    editMenu->addAction(RedoAct);
    editMenu->addSeparator();
    editMenu->addAction(copyAct);
    editMenu->addAction(cutAct);
    editMenu->addAction(pasteAct);
    editMenu->addSeparator();
    editMenu->addAction(zoomInAct);
    editMenu->addAction(zoomOutAct);

    //39page
    QMenu *alignMenu = menuebar->addMenu("&Format");
    QMenu *alignMenu_sub = alignMenu->addMenu("&Align");
    QAction *alignCenterAct = makeAction(":build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/center.png",tr("&Center"),tr("Ctrl+1"),\
                                         tr("Center text"),[=](){QTextEdit *textedit = setText_Mdi();textedit->setAlignment(Qt::AlignCenter);});
    QAction *alignRightAct = makeAction("right.png",tr("&Right"),tr("Ctrl+2"),\
                                        tr("Right text"),[=](){QTextEdit *textedit = setText_Mdi();textedit->setAlignment(Qt::AlignRight);});
    QAction *alignLeftAct = makeAction("left.png",tr("&Left"),tr("Ctrl+3"),\
                                       tr("Left text"),[=](){QTextEdit *textedit = setText_Mdi();textedit->setAlignment(Qt::AlignLeft);});
    QAction *alignJustifyAct = makeAction("justify.png",tr("&Justify"),tr("Ctrl+4"),\
                                          tr("Justify text"),[=](){QTextEdit *textedit = setText_Mdi();textedit->setAlignment(Qt::AlignJustify);});
    QAction *colorAct = makeAction("saveas.png",tr("&Color"),tr("Ctrl+9"),\
                                    tr("set color"),this,SLOT(setColor()));
    QAction *fontAct = makeAction("undo.png",tr("&Font"),tr("Ctrl+8"),\
                                   tr("set font"),this,SLOT(setFont()));

    fileToolBar->addAction(alignCenterAct);
    alignMenu_sub->addAction(alignCenterAct);
    alignMenu_sub->addAction(alignRightAct);
    alignMenu_sub->addAction(alignLeftAct);
    alignMenu_sub->addAction(alignJustifyAct);
    alignMenu->addAction(colorAct);
    alignMenu->addAction(fontAct);

    //0522_ 42page
    QWidget *w = new QWidget(this);
    QLabel *label = new QLabel("Hello I'm Dock Label",w);
    QDockWidget *dock = new QDockWidget("Dock Widget",this);

    dock->setAllowedAreas(Qt::LeftDockWidgetArea| Qt::RightDockWidgetArea);
    addDockWidget(Qt::RightDockWidgetArea,dock);
    dock->setWidget(w);

    textedit_dock = new QTextEdit(dock);
    textedit_dock->setGeometry(0,50,100,100);

    toolbarMenu->addAction(dock->toggleViewAction());

    QAction *casAct = makeAction("left.png",tr("&Left"),tr("Ctrl+3"),\
                                 tr("Left text"),[=](){mdiArea->cascadeSubWindows();});
    QAction *tileAct = makeAction("justify.png",tr("&Justify"),tr("Ctrl+4"),\
                                  tr("Justify text"),[=](){mdiArea->tileSubWindows();});

    fileToolBar->addAction(casAct);
    fileToolBar->addAction(tileAct);
    //56page
    actions.append(undoAct);
    actions.append(RedoAct);
    actions.append(copyAct);
    actions.append(cutAct);
    actions.append(pasteAct);
    actions.append(zoomInAct);
    actions.append(zoomOutAct);
    if (activeSub){
        connect(mdiArea,SIGNAL(subWindowActivated(QMdiSubWindow*)),
            SLOT(connectWindow(QMdiSubWindow*)));
    }
    //6장 10page
    QMenu *helpMenu = menuebar->addMenu("&Help");
    QAction *InfoAct = new QAction("About",helpMenu);

    helpMenu->addAction(InfoAct);
    connect(InfoAct,SIGNAL(triggered()),SLOT(Info()));

    //
    winMenu = menuebar->addMenu("&Window");


#if 0
    QTextEdit m_textedit = new QTextEdit(this);
    mdiArea->addSubWindow(textedit);
#else
    QTextEdit *m_textedit = m_newFile();

#endif
}

void MainWindow::Info(){
    QMessageBox::information(mdiArea,"About","This is my About",
                            QMessageBox::Yes|QMessageBox::No | QMessageBox::Cancel);
}
void MainWindow::setFont(){
    bool ok;
    QTextEdit* textedit = (QTextEdit*)mdiArea->currentSubWindow()->widget();
    QFont font = QFontDialog::getFont(&ok,textedit->currentFont(),this);
    if(ok)textedit->setCurrentFont(font);
}

void MainWindow::connectWindow(QMdiSubWindow* window){
    if(window == nullptr){
        prevTextEdit = nullptr;
    }
    else
    {
        QTextEdit *textedit = qobject_cast<QTextEdit*>(window->widget());
        if(prevTextEdit != nullptr){
            Q_FOREACH(QAction *action,actions)
                action->disconnect(prevTextEdit);
        }
        prevTextEdit = textedit;
        const char *methods[7] ={
            SLOT(undo()),SLOT(redo()),SLOT(copy()),SLOT(cut()),
            SLOT(paste()),SLOT(zoomIn()),SLOT(zoomOut())
        };
        int cnt =0;
        Q_FOREACH(QAction * action, actions)
            connect(action,SIGNAL(triggered()),textedit,methods[cnt++]);
    }

}
QTextEdit *MainWindow::setText_Mdi(){

    QMdiSubWindow *subWindow = mdiArea->currentSubWindow();

    if(subWindow!=nullptr)
    {
        QTextEdit *m_t = dynamic_cast<QTextEdit*>(subWindow->widget());
        return m_t;
    }
    return 0;
}
void MainWindow::setFontWidget(){
    QTextEdit *textedit = setText_Mdi();
    QFont font =textedit->currentFont();
    fontComboBox->blockSignals(true);
    sizeSpinBox->blockSignals(true);
    fontComboBox->setCurrentFont(font);
    sizeSpinBox->setValue(font.pointSizeF());
    fontComboBox->blockSignals(false);
    sizeSpinBox->blockSignals(false);
}

void MainWindow::setColor(){
    QTextEdit* textedit = (QTextEdit*)mdiArea->currentSubWindow()->widget();
    QColor color = QColorDialog::getColor(textedit->textColor(),this);
    if(color.isValid())textedit->setTextColor(color);
}

// void MainWindow::setTextFont(QFont font){
//     QTextEdit *textedit = (QTextEdit*)mdiArea->currentSubWindow()->widget();
//     textedit->setCurrentFont(font);
// }

// void MainWindow::setTextSize(qreal size){
//     QTextEdit *textedit = (QTextEdit*)mdiArea->currentSubWindow()->widget();
//     QFont font = textedit->currentFont();
//     font.setPointSize(size);
//     textedit->setCurrentFont(font);
// }

QTextEdit *MainWindow::m_newFile(){
    qDebug("hello i am QMdiArea new File");
    QAction *windowAct = new QAction("This is New File", this);
    winMenu->addAction(windowAct);
    QTextEdit *m_t = new QTextEdit;

    connect(m_t,SIGNAL(cursorPositionChanged()),SLOT(setFontWidget()));
    connect(windowAct,SIGNAL(triggered()),m_t,SLOT(setFocus()));
    connect(m_t,SIGNAL(destroyed(QObject*)),m_t,SLOT(deleteLater()));
    connect(m_t,SIGNAL(destroyed(QObject*)),windowAct,SLOT(deleteLater()));

    mdiArea->addSubWindow(m_t);
    m_t->show();
    windowHash[windowAct] = m_t;

    return m_t;
}


template<typename T>
QAction *MainWindow::makeAction(QString icon, QString text,T ShortCut,\
                              QString toolTip, QObject* recv,const char* slot){
    QAction *act = new QAction(text,this);
    if(icon.length())
        act->setIcon(QIcon(icon));
    act->setShortcut(ShortCut);
    act->setStatusTip(toolTip);
    connect(act,SIGNAL(triggered()),recv,slot);
    return act;
}

template<>
QAction *MainWindow::makeAction(QString icon, QString text, \
                              const char* shortCut, QString toolTip, \
                              QObject* recv, const char* slot){
    QAction *act = new QAction(text,this);
    if(icon.length())
        act->setIcon(QIcon(icon));
    act->setShortcut(QString(shortCut));
    act->setStatusTip(toolTip);
    connect(act,SIGNAL(triggered()),recv,slot);
    return act;
}


template<typename T, typename Functor>
QAction *MainWindow::makeAction(QString icon, QString text, T shortCut,\
                              QString toolTip,Functor lambda){
    QAction *act = new QAction(text,this);
    if(icon.length())
        act->setIcon(QIcon(icon));
    QKeySequence keySequence(shortCut);
    act->setShortcut(keySequence);
    act->setStatusTip(toolTip);
    act->setToolTip(toolTip);
    connect(act,&QAction::triggered,this,lambda);

    return act;
}

void MainWindow::newFile(){
    qDebug("Make New File");
    m_newFile();
}

void MainWindow::open(){

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/",
                                                    tr("Text File (*.txt *.html *.cpp)"));
    if(!fileName.length()) return;

    QFileInfo fileInfo(fileName);
    if(fileInfo.isReadable()){
        QFile file(fileName);
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        QByteArray msg =file.readAll();
        file.close();

        QTextEdit *textedit = m_newFile();
        textedit->setWindowTitle(fileName);

        windowHash.key(textedit)->setText(fileName);

        if(fileInfo.suffix() == "htm" || fileInfo.suffix()=="html")
            textedit->setHtml(msg);
        else
            textedit->setPlainText(msg);
    }else{
        QMessageBox::warning(this,"Error","Can't read this file",QMessageBox::Ok);
    }
    qDebug() << fileName;
}

void MainWindow::save(){
    // QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
    //                                                 ".",
    //                                                 tr("Text File (*.txt *.html *.cpp)"));
    //28page
    // QString filename = QFileDialog::getSaveFileName(this, "Select file to save",                                                                  ".", "Text File (*.txt *.html *.c *.cpp *.h)");
    // QTextEdit *textedit = (QTextEdit*)mdiArea->currentSubWindow( )->widget( );
    // windowHash.key(textedit)->setText(filename);
    //44page
    QMdiSubWindow *window = mdiArea->currentSubWindow();
    if(window != nullptr){
        QTextEdit *textedit = qobject_cast<QTextEdit*>(window->widget());
        QString filename = textedit->windowTitle();
        if(!filename.length()){
            filename = QFileDialog::getSaveFileName(this,"Select a file to save",".",
                                                    "Text File(*.txt *.html *.cpp)");
            if(!filename.length())return;
            textedit->setWindowTitle(filename);
            windowHash.key(textedit)->setText(filename);
        }
        QFile file(filename);
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        QFileInfo fileInfo(filename);
        if(fileInfo.isWritable()){
            QByteArray msg = (fileInfo.suffix() == "htm"||fileInfo.suffix() == "html")?textedit->toHtml().toUtf8():textedit->toPlainText().toUtf8();
            file.write(msg);
        }else{
            QMessageBox::warning(this,"Error","can't save this file",QMessageBox::Ok);
        }
        file.close();
    }

    // QString filename = QFileDialog::getSaveFileName(this, "Select file to save",                                                                  ".", "Text File (*.txt *.html *.c *.cpp *.h)");
    // QTextEdit *textedit = (QTextEdit*)mdiArea->currentSubWindow( )->widget( );
    // windowHash.key(textedit)->setText(filename);
    //qDebug() << fileName;
}
void MainWindow::print(){
    QPrinter printer(QPrinter::HighResolution);
    printer.setFullPage(true);
    QPrintDialog printDialog(&printer,this);
    if(printDialog.exec() == QDialog::Accepted){
        QTextEdit* textedit = (QTextEdit*)mdiArea->currentSubWindow()->widget();
        textedit->print(&printer);
    }

}
void MainWindow::saveas(){
    QMdiSubWindow *window = mdiArea->currentSubWindow();
    if(window != nullptr){
        QTextEdit *textedit = qobject_cast<QTextEdit*>(window->widget());
        QString fileName = QFileDialog::getSaveFileName(this, tr("Save all File"),
                                                        ".",
                                                        tr("Text File (*.txt *.html *.cpp)"));
        if(!fileName.length())return;
        textedit->setWindowTitle(fileName);
        QFile *file = new QFile(fileName);
        file->open(QIODevice::WriteOnly | QIODevice::Text);
        QFileInfo fileInfo(fileName);
        if(fileInfo.isWritable()){
            QByteArray msg = (fileInfo.suffix() == "htm"||fileInfo.suffix() == "html")?textedit->toHtml().toUtf8():textedit->toPlainText().toUtf8();
            file->write(msg);
        }else{
            QMessageBox::warning(this,"Error","can't save this file",QMessageBox::Ok);
        }
        file->close();
    }


    //qDebug() << fileName;
}

MainWindow::~MainWindow() {}

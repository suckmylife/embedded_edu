#include "qteditor.h"

QtEditor::QtEditor(QWidget *parent)
    : QMainWindow(parent)
{
    //10 page
    // QTextEdit *textedit = new QTextEdit(this);
    // setCentralWidget(textedit);
    //13 page
    // QMenuBar *menuebar = new QMenuBar(this);
    // setMenuBar(menuebar);
    // QAction *newAct = new QAction(QIcon(),"&New",this);
    // QMenu *fileMenu = menuebar->addMenu("&File");


    //18 page
    // QMenuBar *menuebar = new QMenuBar(this);
    // setMenuBar(menuebar);
    // QAction *newAct = new QAction(QIcon("new.png"),"&New",this);
    // newAct->setShortcut(tr("Ctrl+N"));
    // newAct->setStatusTip(tr("make new file"));
    // connect(newAct, SIGNAL(triggered()),SLOT(newFile()));

    // QMenu *fileMenu = menuebar->addMenu("&File");
    // fileMenu->addAction(newAct);

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
    QMenu *fileMenu = menuebar->addMenu("&File");
    fileMenu->addAction(newAct);
    fileMenu->addAction(quitAct);
    fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
    fileMenu->addAction(printAct);
    fileMenu->addAction(saveasAct);

    QToolBar *fileToolBar = addToolBar("&File");
    fileToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    fileToolBar->addAction(quitAct);

    QMenu *windowMenu = menuebar->addMenu("&Window");
    QMenu *toolbarMenu = windowMenu->addMenu("&Toolbar");
    toolbarMenu->addAction(fileToolBar->toggleViewAction());
    //32 page
    QFontComboBox *fontComboBox = new QFontComboBox(this);
    //QTextEdit *textedit = new QTextEdit(this);
    textedit = new QTextEdit(this);
    setCentralWidget(textedit);
    QDoubleSpinBox* sizeSpinBox = new QDoubleSpinBox(this);
    connect(sizeSpinBox, SIGNAL(valueChanged(double)),
            textedit,SLOT(setFontPointSize(qreal)));
    connect(fontComboBox, SIGNAL(currentFontChanged(QFont)),
            textedit,SLOT(setCurrentFont(QFont)));
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
                     tr("Undo text"),[=](){textedit->undo();});
    QAction *RedoAct = makeAction("redo.png",tr("&Redo"),QKeySequence::Redo,\
                                  tr("Redo text"),[=](){textedit->redo();});
    QAction *copyAct = makeAction("copy.png",tr("&Copy"),QKeySequence::Copy,\
                                  tr("Copy text"),[=](){textedit->copy();});
    QAction *cutAct = makeAction("cut.png",tr("&Cut"),QKeySequence::Cut,\
                                  tr("Cut text"),[=](){textedit->cut();});
    QAction *pasteAct = makeAction("paste.png",tr("&Paste"),QKeySequence::Paste,\
                                   tr("Paste program"),[=](){textedit->paste();});
    QAction *zoomInAct = makeAction("zoomin.png",tr("&ZoomIn"),QKeySequence::ZoomIn,\
                                    tr("Zoom In"),[=](){textedit->zoomIn();});
    QAction *zoomOutAct = makeAction("zoomout.png",tr("&ZoomOut"),QKeySequence::ZoomOut,\
                                    tr("Zoom out"),[=](){textedit->zoomOut();});
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
    QAction *alignCenterAct = makeAction("center.png",tr("&Center"),tr("Ctrl+1"),\
                                  tr("Center text"),[=](){textedit->setAlignment(Qt::AlignCenter);});
    QAction *alignRightAct = makeAction("right.png",tr("&Right"),tr("Ctrl+2"),\
                                  tr("Right text"),[=](){textedit->setAlignment(Qt::AlignRight);});
    QAction *alignLeftAct = makeAction("left.png",tr("&Left"),tr("Ctrl+3"),\
                                  tr("Left text"),[=](){textedit->setAlignment(Qt::AlignLeft);});
    QAction *alignJustifyAct = makeAction("justify.png",tr("&Justify"),tr("Ctrl+4"),\
                                 tr("Justify text"),[=](){textedit->setAlignment(Qt::AlignJustify);});
    alignMenu_sub->addAction(alignCenterAct);
    alignMenu_sub->addAction(alignRightAct);
    alignMenu_sub->addAction(alignLeftAct);
    alignMenu_sub->addAction(alignJustifyAct);
}

template<typename T>
QAction *QtEditor::makeAction(QString icon, QString text,T ShortCut,\
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
QAction *QtEditor::makeAction(QString icon, QString text, \
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
QAction *QtEditor::makeAction(QString icon, QString text, T shortCut,\
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

void QtEditor::newFile(){
    qDebug("Make New File");
}

void QtEditor::open(){
    qDebug("Open File");
}

void QtEditor::save(){
    qDebug("save File");
}
void QtEditor::print(){
    qDebug("print File");
}
void QtEditor::saveas(){
    qDebug("save as File");
}


QtEditor::~QtEditor() {}

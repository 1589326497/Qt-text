#include "Mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QLabel>
#include <QTextEdit>
#include <QDockWidget>  //浮动窗口
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //----------菜单栏 在主窗口只有一个
    QMenuBar* menuBar =new QMenuBar(this);
    this->setMenuBar(menuBar);
    QMenu* act=menuBar->addMenu("文件")->addMenu("功能");
    act->addAction("打开");
    act->addSeparator();
    act->addAction("保存");
    menuBar->addMenu("编辑");
    //-----------工具栏    存在多个
    QToolBar* toolBar=new QToolBar;
    this->addToolBar(Qt::LeftToolBarArea,toolBar);
    toolBar->addAction("编辑");
    toolBar->addSeparator();
    toolBar->addAction("打开");
    toolBar->addSeparator();
    //--------状态栏
    QStatusBar* statusBar =new QStatusBar;
    this->setStatusBar(statusBar);
    statusBar->addWidget(new QLabel("FPS:255"));
    statusBar->addPermanentWidget(new QLabel("FPS:255"));

    //----------------------中心部件
    this->setCentralWidget(new QTextEdit("请输入文本"));

    //----------------------衔接部件 浮动窗口
    QDockWidget* dock =new QDockWidget("文本1");
    this->addDockWidget(Qt::LeftDockWidgetArea,dock);
    dock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);

}

MainWindow::~MainWindow()
{
}


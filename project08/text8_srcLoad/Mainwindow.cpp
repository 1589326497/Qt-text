#include "Mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
    资源文件加载方法：
        1.右键项目 添加文件（add new）
        2.选择QT模板，选择qt resource file
        3.命名z'y资源文件名
        4.添加资源前缀，添加文件

     使用资源文件路径   ":/+前缀+资源路径"
    */

    ui->actionopen->setIcon(QIcon(":/icon/imagn/j2.png"));
    ui->actionedit->setIcon(QIcon(":/text/imagn/j3.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


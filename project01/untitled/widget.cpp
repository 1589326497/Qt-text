#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Hello QT");//设置窗口标题
    this->resize(400,800); //设置窗口大小
    this->setFixedSize(200,200); //固定大小，无法改变窗口大小
}

Widget::~Widget()
{
    delete ui;
}


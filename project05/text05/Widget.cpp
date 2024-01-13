#include "Widget.h"
#include <QMenuBar>  //菜单栏
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("主窗口五大部件");

    QMenuBar* menuBar =new QMenuBar(this);

}

Widget::~Widget()
{

}


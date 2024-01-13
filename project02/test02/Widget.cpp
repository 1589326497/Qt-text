#include "Widget.h"
#include "QPushButton"
#include "Button.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)   //派生类的构造调用基类
{
    this->setWindowTitle("你好GT");   //设置窗口标题
    this->resize(400,500); //设置窗口大小
    this->setFixedSize(400,400);    //设置窗口固定大小，无法改变窗口大小

    //创建一个按钮
    QPushButton* btn=new QPushButton;
    //btn->resize(80,30);
    btn->setParent(this);   //设置父亲 窗口销毁时自动释放
    btn->setText("开始游戏");   //设置文本
    QFont font("楷体",20,10,1);   //设置字体对象
    btn->setFont(font); //设置字体
    btn->move(100,100);
    btn->show();    //显示
    //自定义Butten
    Button* btn1=new Button;
    btn1->setParent(this);
    btn1->setText("自定义按钮");
    btn1->show();
    //有参构造Button
    Button* btn2=new Button(this,"有参构造Button");
    btn2->move(100,0);
    btn2->show();

}

Widget::~Widget()
{

}


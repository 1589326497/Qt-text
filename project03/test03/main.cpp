#include "Widget.h"
#include <QApplication>
/*
    信号和槽 是QT框架最为自豪的东西。实际上就是 观察者模式
    使用connect函数可以为信号 以及槽建立好连接 当信号 广播时 槽 做出相应的处理
    信号来自于 被观察者 槽来自 观察者

    signals 信号：就是函数声明 无需实现 系统大多数类 都内置了信号，开发者也可以（自定义信号）
    slot 槽：本质就是一个函数 一般是类的成员函数 有声明并且有实现体 系统大多数类 都内置了槽 开发者可以自定义槽
    connect(被观察者，信号，观察者，槽);//用法1
    connect(被观察者，信号，lambda表达式)；//用法二

*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}

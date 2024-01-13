#include "Widget.h"
#include <QApplication>

/*
QT内置了大量的信号和槽 还支持用户自定义 信号和槽

自定义槽：
    1.有声明并且有实现
    2.返回值类型为 void
    3.槽函数 可以带参 可以重载
自定义信号：
    1.写在 Signal：下
    2.只需声明 无需实现
    3.返回值为 void
    4.可以带参 可以重载
    5.emit 可以触发信号
自定义信号和槽的特点
    1.一个信号 可以被 多个槽绑定
    2.同一个槽函数 可以绑定 多个信号
    3.信号 和 槽要 函数参数表 要一一对应，槽的参数来自于信号
    4.信号的参数表可以多余槽函数 但是 槽的参数表不能多余信号的参数表
信号和槽 断开连接
    1.disconnect() 断开连接
*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}

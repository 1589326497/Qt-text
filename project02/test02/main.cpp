#include "Widget.h"

#include <QApplication> //应用程序头文件
/*
QT编译器快捷键
注释 ctrl + /
运行 ctrl + r
构建 ctrl + b
转到定义 F2
返回 ALT +左
前进 ALT +右

QPushButton 继承与 QAbstractButton 继承与Qwidget 继承与 QObject
构造函数 无参构造 带参构造

对象树 QT中的类的继承关系 有一定程度简化了对象释放操作，由QT的QObject类派生出来的，类无需手动释放 添加到QObject或QObject派生类的对象，
也无需手动释放，程序结束时 QT会自动检测对象树的对象，先释放子对象在释放父对象
*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//定义应用程序对象
    Widget w;   //定义空窗口对象
    w.show();   //调用空窗口子方法
    return a.exec();    // 调用应用程序对象消息循环
}

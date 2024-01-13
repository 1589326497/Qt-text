#include "Widget.h"
#include <QApplication>//应用程序头文件
/*
    QT编译器快捷键
    注释 ctrl+/
    运行 ctrl+R
    构建 ctrl+B
    转到定义/声明切换 F2
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //定义应用程序对象
    Widget w;//调用空窗口对象
    w.show();//调用窗口子函数 显示窗口

    return a.exec();//调用应用程序对象 消息循环函数
}

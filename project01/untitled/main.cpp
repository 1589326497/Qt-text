#include "widget.h"
#include <QApplication>//应用程序头文件

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//定义应用程序对象
    Widget w;//定义空窗口对象
    w.show();//调用子方法 显示窗口
    return a.exec();//调用应用程序对象 消息循环函数
}

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>  //包含QT空窗口头文件

class Widget : public QWidget
{
    Q_OBJECT    //支持信号 和 槽

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H

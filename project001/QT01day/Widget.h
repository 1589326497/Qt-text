#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>//包含 QT空窗口头文件

class Widget : public QWidget
{
    Q_OBJECT    //宏 支持信号和槽

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H

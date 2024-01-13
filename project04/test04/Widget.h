#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <Boss.h>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    //广播 boss死亡信号
    void BossDeadBroadcast();
public:
    Boss* mboss;
};
#endif // WIDGET_H

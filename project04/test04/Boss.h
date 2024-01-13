#ifndef BOSS_H
#define BOSS_H

#include <QWidget>

class Boss : public QWidget
{
    Q_OBJECT
public:
    //explicit关键字 修饰函数 参数 无法自动转换类型
    explicit Boss(QString _name,int _exp,QWidget *parent = nullptr);


    //信号定义
signals:
    //自定义类
    void DeadSignal();//定义死亡信号
    void DeadSignal(int _exp);//定义死亡信号重载
public slots:  //槽函数定义
    void BossDeadSlot();    //Boss死亡槽函数

public:
    int exp;    //经验值
    QString name; //名字
};

#endif // BOSS_H

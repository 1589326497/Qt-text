#include "Boss.h"
#include <QDebug>
Boss::Boss(QString _name,int _exp,QWidget *parent) : QWidget(parent)
{
    this->name=_name;
    this->exp=_exp;
}
void Boss::BossDeadSlot()    //Boss死亡槽函数
{
    qDebug()<<name<<"死了 掉落经验"<<exp;
}

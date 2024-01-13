#include "Widget.h"
#include "Boss.h"
#include <QPushButton>
#include <QDebug>
#include <Role.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //观察者 boss 处理函数 死亡打印
    //被观察者 按钮 信号 点击
    //按钮点击 处理boss死亡
    auto btn=new QPushButton("击杀",this);
    btn->move(0,100);
    auto boss=new Boss("白蛇",1000,this);
    connect(btn,&QPushButton::clicked,boss,&Boss::BossDeadSlot);    //绑定信号

    //-------自定义信号
    mboss=new Boss("美猴王",10000,this);
    auto btn2=new QPushButton("播放死亡信号",this);btn->move(0,100);
    btn2->move(0,200);
    //定义信号 触发Boss死亡。点击按钮 触发死亡信号，死亡信号，对应boss死亡槽函数处理
    void (Boss::*pDeadSignalZero)()=&Boss::DeadSignal;
    void (Role::*pGetExpZero)()=&Role::GetExp;
    connect(btn2,&QPushButton::clicked,this,&Widget::BossDeadBroadcast);
    connect(mboss,pDeadSignalZero,mboss,&Boss::BossDeadSlot);

    //Boss死亡信号触发后 角色获得经验 处理
    auto mrole=new Role;
    connect(mboss,pDeadSignalZero,mrole,pGetExpZero);
    //链接带参信号 和 槽 用指针指向来区别重载
    void (Boss::*pDeadSignal)(int)=&Boss::DeadSignal;
    void (Role::*pGetExp)(int)=&Role::GetExp;
    connect(mboss,pDeadSignal,mrole,pGetExp);
    //信号绑信号
    auto btn3=new QPushButton("信号连接信号测试",this);
    btn3->move(100,200);
    connect(btn3,&QPushButton::clicked,mboss,pDeadSignalZero);
    //断开绑定 和 槽连接
    disconnect(btn3,&QPushButton::clicked,mboss,pDeadSignalZero);

}

Widget::~Widget()
{

}

void Widget::BossDeadBroadcast()
{
    //触发死亡信号逻辑
    emit mboss->DeadSignal();
    emit mboss->DeadSignal(this->mboss->exp); //触发带参信号
    qDebug()<<"死亡信号广播";
}

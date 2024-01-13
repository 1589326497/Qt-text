#include "Widget.h"
#include <QPushButton>
#include <QDebug>
#include <QLabel>   //文本控件
#include <QSlider>  //滑动条控件
#include <QProgressBar> //进度条控件
#include <QTextEdit>    //文本编辑框

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //最大化按钮 （被观察者）
    auto btnMax=new QPushButton("最大化",this);
    //this窗口 （观察者）
    //建立信号 和 槽 连接
    connect(btnMax,&QPushButton::clicked,this,&QWidget::showMaximized);

    //最小化按钮
    auto btnMin=new QPushButton("最小化",this);
    btnMin->move(100,0);
    connect(btnMin,&QPushButton::clicked,this,&QWidget::showMinimized);
    //恢复正常按钮
    auto btnNormal=new QPushButton("正常",this);
    btnNormal->move(200,0);
    connect(btnNormal,&QPushButton::clicked,this,&QWidget::showNormal);

    //设置一个按钮
    //鼠标按下 打印 被打了
    //鼠标抬起 打印 反抗了
    auto btn =new QPushButton("老鼠",this);
    btn->move(100,100);
    //当按钮被点击时 调用lamda表达式
    connect(btn,&QPushButton::pressed,[]()->void{
                qDebug()<<"被打了";
            });
    connect(btn,&QPushButton::released,[]()->void{
                qDebug()<<"老鼠反抗了";
            });
    //指针指向 Lamda表达式
    int num1 =100,num2=200;
    auto pFun=[&num1]()->void{
            num1=255;
            qDebug()<<num1;
    };
    pFun();

    //————————————————————————————简单常用的控件——————————————————————————————————
    //-----文字控件
    QLabel* label=new QLabel;
    label->setParent(this);
    label->move(0,300);
    label->setText("今天天气如何");
    label->setFont(QFont("楷体",20,10,1));
    //-----滑动条控件
    QSlider* slider=new QSlider;
    slider->setParent(this);
    slider->move(300,100);
    slider->setValue(0);
    slider->setMaximum(100);
    slider->setMinimum(0);
    //通过滑动滑动条改变字体大小
    connect(slider,&QSlider::valueChanged,[label](int value){
        label->setFont(QFont("楷体",value,10,1));
        label->resize(9*value,2*value);
    });

    //-----进度条控件
    QProgressBar* proBar=new QProgressBar;
    proBar->setParent(this);
    proBar->move(0,400);
    proBar->resize(this->size().width(),20);
    proBar->setValue(0);
    //通过滑动条改变进度条
    connect(slider,&QSlider::valueChanged,[proBar](int _value){
        proBar->setValue(_value);
    });
    //-----文本编辑框
    QTextEdit* edit=new QTextEdit;
    edit->move(0,500);
    edit->resize(300,300);
    edit->setParent(this);
    edit->setFont(QFont("楷体",20,10,1));
    //edit->setFontPointSize(qreal(35.5));
    edit->setText("你好QT");
    //练习通过写入文本框 改变label
    connect(edit,&QTextEdit::textChanged,[edit,label]()->void{
                label->setText(edit->toPlainText());
            });

    //*********补充：老版本的信号和槽QT4以前
    //点击按钮 最大化按钮
    auto btn10=new QPushButton("老版本测试按钮",this);
    connect(btn10,SIGNAL(clicked()),this,SLOT(showMaximized()));

}

Widget::~Widget()
{

}


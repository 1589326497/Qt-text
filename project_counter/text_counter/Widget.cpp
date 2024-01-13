#include "Widget.h"
#include "ui_Widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //数字按钮绑定
    connect(ui->pushButton_0,&QPushButton::clicked,[this](){
        onClicked(Num,"0");
    });
    connect(ui->pushButton_1,&QPushButton::clicked,[this](){
        onClicked(Num,"1");
    });
    connect(ui->pushButton_2,&QPushButton::clicked,[this](){
        onClicked(Num,"2");
    });
    connect(ui->pushButton_3,&QPushButton::clicked,[this](){
        onClicked(Num,"3");
    });
    connect(ui->pushButton_4,&QPushButton::clicked,[this](){
        onClicked(Num,"4");
    });
    connect(ui->pushButton_5,&QPushButton::clicked,[this](){
        onClicked(Num,"5");
    });
    connect(ui->pushButton_6,&QPushButton::clicked,[this](){
        onClicked(Num,"6");
    });
    connect(ui->pushButton_7,&QPushButton::clicked,[this](){
        onClicked(Num,"7");
    });
    connect(ui->pushButton_8,&QPushButton::clicked,[this](){
        onClicked(Num,"8");
    });
    connect(ui->pushButton_9,&QPushButton::clicked,[this](){
        onClicked(Num,"9");
    });

    //运算符按钮绑定
    connect(ui->pushButton_sun,&QPushButton::clicked,[this](){
        onClicked(Op,"+");
    });
    connect(ui->pushButton_sub,&QPushButton::clicked,[this](){
        onClicked(Op,"-");
    });
    connect(ui->pushButton_mul,&QPushButton::clicked,[this](){
        onClicked(Op,"×");
    });
    connect(ui->pushButton_div,&QPushButton::clicked,[this](){
        onClicked(Op,"÷");
    });
    connect(ui->pushButton_turn,&QPushButton::clicked,[this](){
        onClicked(Turn,"Turn");
    });
    //其他按钮绑定
    connect(ui->pushButton_back,&QPushButton::clicked,[this](){
        onClicked(Back,"Back");
    });
    connect(ui->pushButton_clear,&QPushButton::clicked,[this](){
        onClicked(Clear,"Clear");
    });
    connect(ui->pushButton_dot,&QPushButton::clicked,[this](){
        onClicked(Dot,".");
    });
    connect(ui->pushButton_equal,&QPushButton::clicked,[this](){
        onClicked(Equal,"=");
    });

}

Widget::~Widget()
{
    delete ui;
}
double Widget::Compute()
{
    double num1=Mnum1.toDouble();//将字符串转换为 小数
    double num2=Mnum2.toDouble();
    double result=0.0;
    if(Mop=="+")
        result=num1+num2;
    else if(Mop=="-")
        result=num1-num2;
    else if(Mop=="×")
        result=num1*num2;
    else if(Mop=="÷")
    {
        if(num2==0.0)
        {
            ui->lineEdit->setText("除数不能为零");
            return result;
        }
        result=num1/num2;
    }
    ui->lineEdit->setText(QString::number(result));//将其他类型转换为字符串
    return result;
}
void Widget::onClicked(BtnType _type,QString _btn)
{
    switch(_type)
    {
    case Num:{
        if(Mop.isEmpty())    //运算符为空，说明操作数为1
        {
            this->Mnum1+=_btn;
        }
        else//非空
        {
            this->Mnum2+=_btn;
        }
        break;
    }
    case Op:{
        if(Mnum2.isEmpty())
            Mop=_btn;
        else
        {

            Mnum1=QString::number(Compute());
            Mnum2.clear();
            Mop=_btn;
        }

        break;
    }
    case Dot:{
        if(Mop.isEmpty())
        {
            //操作数1的小数点
            if(!Mnum1.isEmpty()&&!Mnum1.contains("."))//操作数1没有点 且不空
            {
                Mnum1+=_btn;
            }
        }
        else
        {
            //操作数2的小数点
            if(!Mnum2.isEmpty()&&!Mnum2.contains("."))//操作数2没有点 且不空
            {
                Mnum2+=_btn;
            }
        }
        break;
    }
    case Back:{
        if(!Mnum1.isEmpty()&&!Mnum2.isEmpty()&&!Mop.isEmpty())
        {
            Mnum2.chop(1); //尾删
        }
        else if(!Mnum1.isEmpty()&&Mnum2.isEmpty()&&!Mop.isEmpty())
        {
            Mop.chop(1);
        }
        else if(!Mnum1.isEmpty()&&Mnum2.isEmpty()&&Mop.isEmpty())
        {
            Mnum1.chop(1);
        }
        break;
    }
    case Turn:{
        if(!Mnum1.isEmpty()&&Mop.isEmpty())
        {
            Mnum1=QString::number(-1*Mnum1.toDouble());

        }
        else if(!Mop.isEmpty()&&!Mnum2.isEmpty())
        {
            Mnum2=QString::number(-1*Mnum2.toDouble());

        }
        else if(!Mop.isEmpty()&&Mnum2.isEmpty())
        {
            return;
        }
        break;
    }

    case Clear:{
        Mnum1.clear();
        Mnum2.clear();
        Mop.clear();
        break;
    }
    case Equal:{
        if(Mnum1.isEmpty()||Mnum2.isEmpty()||Mop.isEmpty())
            return;
        Compute();
        Mnum1.clear();
        Mnum2.clear();
        Mop.clear();
        return;
    }

    }
    ui->lineEdit->setText(Mnum1+Mop+Mnum2);
}

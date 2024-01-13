/*
    计算器练习
*/
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

enum BtnType
{
    Num,
    Op,
    Dot,
    Equal,
    Clear,
    Back,
    Turn,
};

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    double Compute();
    QString Mnum1;   //操作数1
    QString Mnum2;   //操作数2
    QString Mop; //运算符
private:
    Ui::Widget *ui;


public slots:
    void onClicked(BtnType _type,QString _btn);
};
#endif // WIDGET_H

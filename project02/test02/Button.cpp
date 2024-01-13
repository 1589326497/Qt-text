#include "Button.h"

Button::Button()
{

}
Button::Button(QWidget* p,QString name)
{
    setParent(p);
    setText(name);

}
Button::~Button()
{
    qDebug()<<"自定义按钮被释放";
}

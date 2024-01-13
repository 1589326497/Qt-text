#include "Widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("Hwllo GT");
    this->resize(400,500);
}

Widget::~Widget()
{

}


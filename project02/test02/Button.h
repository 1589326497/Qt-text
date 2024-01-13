#ifndef BUTTON_H
#define BUTTON_H
#include <QPushButton>
#include <QDebug>

class Button:public QPushButton
{
public:
    Button();
    Button(QWidget* p,QString name);
    ~Button();
};

#endif // BUTTON_H

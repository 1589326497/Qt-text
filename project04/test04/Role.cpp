#include "Role.h"
#include <QDebug>
Role::Role(QWidget *parent) : QWidget(parent)
{

}
void Role::GetExp()
{
    qDebug()<<"角色获得经验";

}
void Role::GetExp(int _exp)
{
     qDebug()<<"角色获得"<<_exp<<"经验重载";
}

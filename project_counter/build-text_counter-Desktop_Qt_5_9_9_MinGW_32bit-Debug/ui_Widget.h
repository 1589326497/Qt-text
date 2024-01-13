/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_sun;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_div;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_back;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_turn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(359, 443);
        pushButton_0 = new QPushButton(Widget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(20, 296, 82, 58));
        QFont font;
        font.setPointSize(30);
        pushButton_0->setFont(font);
        pushButton_1 = new QPushButton(Widget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(20, 242, 82, 58));
        pushButton_1->setFont(font);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(101, 242, 82, 58));
        pushButton_2->setFont(font);
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(101, 188, 82, 58));
        pushButton_5->setFont(font);
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(182, 242, 82, 58));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 188, 82, 58));
        pushButton_4->setFont(font);
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(182, 188, 82, 58));
        pushButton_6->setFont(font);
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 134, 82, 58));
        pushButton_7->setFont(font);
        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(101, 134, 82, 58));
        pushButton_8->setFont(font);
        pushButton_9 = new QPushButton(Widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(182, 134, 82, 58));
        pushButton_9->setFont(font);
        pushButton_dot = new QPushButton(Widget);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(101, 296, 82, 58));
        pushButton_dot->setFont(font);
        pushButton_equal = new QPushButton(Widget);
        pushButton_equal->setObjectName(QStringLiteral("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(182, 296, 82, 58));
        pushButton_equal->setFont(font);
        pushButton_sun = new QPushButton(Widget);
        pushButton_sun->setObjectName(QStringLiteral("pushButton_sun"));
        pushButton_sun->setGeometry(QRect(263, 134, 82, 58));
        pushButton_sun->setFont(font);
        pushButton_sub = new QPushButton(Widget);
        pushButton_sub->setObjectName(QStringLiteral("pushButton_sub"));
        pushButton_sub->setGeometry(QRect(263, 188, 82, 58));
        pushButton_sub->setFont(font);
        pushButton_mul = new QPushButton(Widget);
        pushButton_mul->setObjectName(QStringLiteral("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(263, 242, 82, 58));
        pushButton_mul->setFont(font);
        pushButton_div = new QPushButton(Widget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setGeometry(QRect(263, 296, 82, 58));
        pushButton_div->setFont(font);
        pushButton_clear = new QPushButton(Widget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(183, 351, 161, 57));
        pushButton_clear->setFont(font);
        pushButton_back = new QPushButton(Widget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(21, 351, 82, 57));
        pushButton_back->setFont(font);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 20, 321, 71));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit->setFont(font1);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setDragEnabled(true);
        lineEdit->setReadOnly(false);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 420, 128, 16));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        label->setFont(font2);
        pushButton_turn = new QPushButton(Widget);
        pushButton_turn->setObjectName(QStringLiteral("pushButton_turn"));
        pushButton_turn->setGeometry(QRect(102, 351, 82, 57));
        pushButton_turn->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        pushButton_dot->setText(QApplication::translate("Widget", ".", Q_NULLPTR));
        pushButton_equal->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
        pushButton_sun->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        pushButton_sub->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        pushButton_mul->setText(QApplication::translate("Widget", "*", Q_NULLPTR));
        pushButton_div->setText(QApplication::translate("Widget", "\303\267", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("Widget", "\342\206\220", Q_NULLPTR));
        lineEdit->setText(QString());
        label->setText(QApplication::translate("Widget", "\350\256\241\347\256\227\345\235\244\342\200\224\342\200\224\345\256\201\345\255\220\345\270\214", Q_NULLPTR));
        pushButton_turn->setText(QApplication::translate("Widget", "-/+", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

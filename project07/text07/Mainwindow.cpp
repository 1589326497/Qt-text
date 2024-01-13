#include "Mainwindow.h"
#include "ui_Mainwindow.h"
#include <QDebug>
#include <QDialog>
#include <QFileDialog>  //文件对话框
#include <QColorDialog> //颜色对话框
#include <QFontDialog>  //文字对话框
#include <QMessageBox>  //消息对话框
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //-----------对话框 QT中内置了大量对话框 供开发者选择
    //自定义对话框：
    //模态对话框: 阻塞式对话框 无法对其他对话框操作
    //非模态对话框: 非阻塞式对话框 可以对其他对话框操作
    //创建模态窗口
    connect(ui->pushButton1,&QPushButton::clicked,this,[this](){
        //主窗口关掉 对话框才会被释放 所以不能用new
//        QDialog* dialog =new QDialog(this);
//        dialog->resize(200,200);
//        dialog->show();
        QDialog dialog(this);
        dialog.resize(200,200);
        //dialog.show(); 用show会吧模态改为非模态
        dialog.exec();  //消息循环
    });
    //创建非模态窗口
    connect(ui->pushButton2,&QPushButton::clicked,this,[this](){

        //方式1

//        QDialog dialog(this);
//        dialog.resize(200,200);
//        dialog.show();
//        dialog.exec();  //消息循环

        //方式2
        QDialog* dialogP=new QDialog(this);
        dialogP->show();
        dialogP->setAttribute(Qt::WA_DeleteOnClose); //关闭时释放对话框
    });
    /*
    系统内置对话框(标准对话框)
    */
    // 1.文件对话框
    //(参数1：父类，参数2：标题，参数3：默认打开路径，参数4：显示的文件类型)
    connect(ui->pushButton3,&QPushButton::clicked,this,[this](){
        QString fileName=QFileDialog::getOpenFileName(this,"D:/","D:/","*.txt");
        qDebug()<<fileName; //返回打开文件的目录
    }); 
    //2.颜色对话框 返回QColor
    auto color=QColorDialog::getColor(Qt::blue,this,"文字颜色");
    ui->textBrowser_1->setTextColor(color);
    ui->textBrowser_1->setText("你好世界");
    //3.文字对话框
    bool bl=true;   //是否选择用户选择的字体
    QFont font=QFontDialog::getFont(&bl);
    ui->label_1->setFont(font);
    //4.消息对话框
    QMessageBox::critical(this,"危险","你错了",QMessageBox::Close);
    QMessageBox::warning(this,"警告","你错了");
    QMessageBox::information(this,"提示","你错了");
    auto btn =QMessageBox::question(this,"问","你爱我吗",QMessageBox::Yes|QMessageBox::No);
    if(btn==QMessageBox::Yes)
    {
        QMessageBox::information(this,"提示","我也爱你");
    }
    else
    {
        QMessageBox::critical(this,"危险","错误");

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


#include "exchange.h"
#include "ui_exchange.h"
#include "one_player_mode.h"
#include "begin.h"
#include <QMessageBox>
exchange::exchange(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::exchange)
{
    ui->setupUi(this);

    paintEvent();
    QPixmap pix("D:/QT_PROJECT/Bobing/photos/p1.png");
    QPixmap dest=pix.scaled(ui->label_4->size(),Qt::KeepAspectRatio);
    ui->label_4->setScaledContents(true);
    ui->label_4->setPixmap(dest);

    QPixmap pix2("D:/QT_PROJECT/Bobing/photos/p3.png");
    QPixmap dest2=pix2.scaled(ui->label_5->size(),Qt::KeepAspectRatio);
    ui->label_5->setScaledContents(true);
    ui->label_5->setPixmap(dest2);

    QPixmap pix3("D:/QT_PROJECT/Bobing/photos/p5.png");
    QPixmap dest3=pix3.scaled(ui->label_6->size(),Qt::KeepAspectRatio);
    ui->label_6->setScaledContents(true);
    ui->label_6->setPixmap(dest3);

    QPixmap pix4("D:/QT_PROJECT/Bobing/photos/p2.png");
    QPixmap dest4=pix4.scaled(ui->label->size(),Qt::KeepAspectRatio);
    ui->label->setScaledContents(true);
    ui->label->setPixmap(dest4);

    QPixmap pix5("D:/QT_PROJECT/Bobing/photos/p4.png");
    QPixmap dest5=pix5.scaled(ui->label_2->size(),Qt::KeepAspectRatio);
    ui->label_2->setScaledContents(true);
    ui->label_2->setPixmap(dest5);

    QPixmap pix6("D:/QT_PROJECT/Bobing/photos/p6.png");
    QPixmap dest6=pix6.scaled(ui->label_3->size(),Qt::KeepAspectRatio);
    ui->label_3->setScaledContents(true);
    ui->label_3->setPixmap(dest6);



}

exchange::~exchange()
{
    delete ui;
}
void exchange::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);
}
void exchange::click_return()
{
    one_player_mode *one=new one_player_mode();
    this->close();
    one->show();

}
void exchange::prize_1()
{
    if(begin::p_point<100000)
    {
        QMessageBox::warning(this,"","YOUR POINT ARE NOT ENOUGH");
    }
    else {
        begin::p_point-=100000;
        //query.exec("update userpsw set [user]='cqh', psw='123456' where ([user]='jack')and ( psw ='222222');");
    }
}
void exchange::prize_2()
{
    if(begin::p_point<50000)
    {
        QMessageBox::warning(this,"","YOUR POINT ARE NOT ENOUGH");
    }
    else {
        begin::p_point-=50000;
    }
}
void exchange::prize_3()
{
    if(begin::p_point<25000)
    {
        QMessageBox::warning(this,"","YOUR POINT ARE NOT ENOUGH");
    }
    else {
        begin::p_point-=25000;
    }
}
void exchange::prize_4()
{
    if(begin::p_point<10000)
    {
        QMessageBox::warning(this,"","YOUR POINT ARE NOT ENOUGH");
    }
    else {
        begin::p_point-=10000;
    }
}
void exchange::prize_5()
{
    if(begin::p_point<5000)
    {
        QMessageBox::warning(this,"","YOUR POINT ARE NOT ENOUGH");
    }
    else {
        begin::p_point-=5000;
    }
}
void exchange::prize_6()
{
    if(begin::p_point<2500)
    {
        QMessageBox::warning(this,"","YOUR POINT ARE NOT ENOUGH");
    }
    else {
        begin::p_point-=2500;
    }
}

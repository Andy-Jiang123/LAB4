#include "mode.h"
#include "ui_mode.h"
#include "widget.h"
#include "play_mode.h"
#include "payment_mode.h"
#include "begin.h"
#include <QMessageBox>
mode::mode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mode)
{
    ui->setupUi(this);
    paintEvent();

}

mode::~mode()
{
    delete ui;
}
void mode::free_mode()
{
    Play_Mode *free=new Play_Mode();
    this->close();
    free->show();
}
void mode::pay_mode()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.dat");
    if(db.open())
    {

        qDebug()<<"okokokoko"<<endl;

    }
    QSqlQuery query;
    Play_Mode *free=new Play_Mode();
    if( begin::f_point>0)
    {
        begin::f_point-=1;
        query.prepare("update User set time=:time WHERE name=:name");
        query.bindValue(":time", begin::f_point);
        query.bindValue(":name", begin::name);
        query.exec("select * from User");
        query.exec();
        while(query.next())
        {

            qDebug()<<query.value(0).toInt()<<query.value(1).toString()<<query.value(2).toString()<<query.value(3).toString();
        }
        this->close();
        free->show();
    }
    else
    {
        QMessageBox::warning(this,"","YOU HAVE NO FREE TIME");
    }


}
void mode::click_return()
{
    Widget *major=new Widget();
    this->close();
    major->show();
}
void mode::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);


}


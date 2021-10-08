#include "begin.h"
#include "ui_begin.h"
#include "regist.h"
#include "widget.h"
#include <QMessageBox>
int begin::f_point=0;
int begin::p_point=0;
QString begin::name="";
begin::begin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::begin)
{
    ui->setupUi(this);
    paintEvent();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.dat");
        //设置数据库名，添加内存数据库。
    if(db.open())
    {

        qDebug()<<"ok"<<endl;

    }
    //数据库打开后则可以开始创建数据库内容
    QSqlQuery query;

    query.exec("create table User (id int primary key, "
                   "name varchar(20),point int ,time int )");

    query.exec("select * from User");
    while(query.next())
    {

        qDebug()<<query.value(0).toInt()<<query.value(1).toString()<<query.value(2).toString()<<query.value(3).toString();
    }



}

begin::~begin()
{
    delete ui;
}
void begin::registerer()
{
    regist *r=new regist();
    this->close();
    r->show();

}
void begin::sign_in()
{
    QSqlQuery query;
    int a=0;
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    if(username == "")
           QMessageBox::warning(this,"","User's can not empty！");
       else if(password == "")
           QMessageBox::warning(this,"","password can not empty！");
    else
       {
        query.exec("select * from User");
        while(query.next())
        {
            if(query.value(0)==password&&query.value(1)==username)
            {
                begin::f_point=query.value(3).toInt();
                begin::p_point=query.value(2).toInt();
                begin::name=username;
                a=1;
            }

        }
       }
    if(a==1)
    {
        QMessageBox::warning(this,"","welcome");
        Widget *w=new Widget();
        this->close();
        w->show();

    }
    else
    {
        QMessageBox::warning(this,"","error");
    }
}
void begin::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);


}


#include "regist.h"
#include "ui_regist.h"
#include "begin.h"

regist::regist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regist)
{
    ui->setupUi(this);
    paintEvent();






}

regist::~regist()
{
    delete ui;
}
void regist::click_ok()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.dat");


    if(db.open())
    {

        qDebug()<<"okokokoko"<<endl;

    }
    QSqlQuery query;
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    QString str1 = QString("insert into User values('%1', '%2', '%3', '%4')")
                        .arg(password).arg(username).arg(0).arg(1);
    query.exec(str1);
    query.exec("select * from User");
    QMessageBox::warning(this,"","regist successful");


}
void regist::click_return()
{
    begin *be=new begin();
    this->close();
    be->show();
}
void regist::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);


}

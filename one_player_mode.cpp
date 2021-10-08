#include "one_player_mode.h"
#include "ui_one_player_mode.h"
#include <QTimer>
#include <QRandomGenerator>
#include <QDebug>
#include <ctime>
#include "widget.h"
#include "exchange.h"
#include "begin.h"


one_player_mode::one_player_mode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::one_player_mode)
{
    ui->setupUi(this);
    randow_number();
    show_result();
    paintEvent();
    calculate();
}

one_player_mode::~one_player_mode()
{
    delete ui;
}
void one_player_mode::open_exchange()
{
    exchange *ex=new exchange();
    this->close();
    ex->show();
}
void one_player_mode::open_return()
{
    Widget *W=new Widget();
    this->close();
    W->show();
}
void one_player_mode::randow_number()
{
    if(Widget::player_num>=1)
    {
        for(int i=0;i<6;i++)
        {
            a1[i]=QRandomGenerator::global()->bounded(1,7);
            if(a1[i]==1)
            {
                a11[0]+=1;
            }
            else if(a1[i]==2)
            {
                a11[1]+=1;
            }
            else if(a1[i]==3)
            {
                a11[2]+=1;
            }
            else if(a1[i]==4)
            {
                a11[3]+=1;
            }
            else if(a1[i]==5)
            {
                a11[4]+=1;
            }
            else
            {
                a11[5]+=1;
            }
        }

    }
    qDebug()<<a11[0]<<" "<<a11[1]<<" "<<a11[2]<<" "<<a11[3]<<" "<<a11[4]<<" "<<a11[5]<<endl;
    if(Widget::player_num>=2)
    {

        for(int i=0;i<6;i++)
        {
            a2[i]=QRandomGenerator::global()->bounded(1,7);
            if(a2[i]==1)
            {
                a22[0]+=1;
            }
            else if (a2[i]==2)
            {
                a22[1]+=1;
            }
            else if (a2[i]==3)
            {
                a22[2]+=1;
            }
            else if(a2[i]==4)
            {
                a22[3]+=1;
            }
            else if(a2[i]==5)
            {
                a22[4]+=1;
            }
            else
            {
                a22[5]+=1;
            }
        }
    }
    if(Widget::player_num>=3)
    {

        for(int i=0;i<6;i++)
        {
            a3[i]=QRandomGenerator::global()->bounded(1,7);
            if(a3[i]==1)
            {
                a33[0]+=1;
            }
            else if(a3[i]==2)
            {
                a33[1]+=1;
            }
            else if(a3[i]==3)
            {
                a33[2]+=1;
            }
            else if(a3[i]==4)
            {
                a33[3]+=1;
            }
            else if(a3[i]==5)
            {
                a33[4]+=1;
            }
            else
            {
                a33[5]+=1;
            }

        }
    }
    if(Widget::player_num>=4)
    {

        for(int i=0;i<6;i++)
        {
            a4[i]=QRandomGenerator::global()->bounded(1,7);
            if(a4[i]==1)
            {
                a44[0]+=1;
            }
            else if(a4[i]==2)
            {
                a44[1]+=1;
            }
            else if(a4[i]==3)
            {
                a44[2]+=1;
            }
            else if(a4[i]==4)
            {
                a44[3]+=1;
            }
            else if(a4[i]==5)
            {
                a44[4]+=1;
            }
            else
            {
                a44[5]+=1;
            }
        }
    }






}
void one_player_mode::show_result()
{
     if(Widget::player_num>=1)
     {
         ui->label->resize(61,49);
         QPixmap pix("D:/QT_PROJECT/Bobing/dice/"+QString::number(a1[0])+".png");
         QPixmap dest=pix.scaled(ui->label->size(),Qt::KeepAspectRatio);
         ui->label->setPixmap(dest);
         ui->label_2->resize(61,49);
         QPixmap pix2("D:/QT_PROJECT/Bobing/dice/"+QString::number(a1[1])+".png");
         QPixmap dest2=pix2.scaled(ui->label_2->size(),Qt::KeepAspectRatio);
         ui->label_2->setPixmap(dest2);
         ui->label_3->resize(61,49);
         QPixmap pix3("D:/QT_PROJECT/Bobing/dice/"+QString::number(a1[2])+".png");
         QPixmap dest3=pix3.scaled(ui->label_3->size(),Qt::KeepAspectRatio);
         ui->label_3->setPixmap(dest3);
         ui->label_4->resize(61,49);
         QPixmap pix4("D:/QT_PROJECT/Bobing/dice/"+QString::number(a1[3])+".png");
         QPixmap dest4=pix4.scaled(ui->label_4->size(),Qt::KeepAspectRatio);
         ui->label_4->setPixmap(dest4);
         ui->label_5->resize(61,49);
         QPixmap pix5("D:/QT_PROJECT/Bobing/dice/"+QString::number(a1[4])+".png");
         QPixmap dest5=pix5.scaled(ui->label_5->size(),Qt::KeepAspectRatio);
         ui->label_5->setPixmap(dest5);
         ui->label_6->resize(61,49);
         QPixmap pix6("D:/QT_PROJECT/Bobing/dice/"+QString::number(a1[5])+".png");
         QPixmap dest6=pix6.scaled(ui->label_6->size(),Qt::KeepAspectRatio);
         ui->label_6->setPixmap(dest6);
     }
     if(Widget::player_num>=2)
     {
         ui->label_7->resize(61,49);
         QPixmap pix("D:/QT_PROJECT/Bobing/dice/"+QString::number(a2[0])+".png");
         QPixmap dest=pix.scaled(ui->label_7->size(),Qt::KeepAspectRatio);
         ui->label_7->setPixmap(dest);

         ui->label_8->resize(61,49);
         QPixmap pix2("D:/QT_PROJECT/Bobing/dice/"+QString::number(a2[1])+".png");
         QPixmap dest2=pix2.scaled(ui->label_8->size(),Qt::KeepAspectRatio);
         ui->label_8->setPixmap(dest2);

         ui->label_9->resize(61,49);
         QPixmap pix3("D:/QT_PROJECT/Bobing/dice/"+QString::number(a2[2])+".png");
         QPixmap dest3=pix3.scaled(ui->label_9->size(),Qt::KeepAspectRatio);
         ui->label_9->setPixmap(dest3);

         ui->label_10->resize(61,49);
         QPixmap pix4("D:/QT_PROJECT/Bobing/dice/"+QString::number(a2[3])+".png");
         QPixmap dest4=pix4.scaled(ui->label_10->size(),Qt::KeepAspectRatio);
         ui->label_10->setPixmap(dest4);

         ui->label_11->resize(61,49);
         QPixmap pix5("D:/QT_PROJECT/Bobing/dice/"+QString::number(a2[4])+".png");
         QPixmap dest5=pix5.scaled(ui->label_11->size(),Qt::KeepAspectRatio);
         ui->label_11->setPixmap(dest5);

         ui->label_12->resize(61,49);
         QPixmap pix6("D:/QT_PROJECT/Bobing/dice/"+QString::number(a2[5])+".png");
         QPixmap dest6=pix6.scaled(ui->label_12->size(),Qt::KeepAspectRatio);
         ui->label_12->setPixmap(dest6);
     }
     if(Widget::player_num>=3)
     {
         ui->label_13->resize(61,49);
         QPixmap pix("D:/QT_PROJECT/Bobing/dice/"+QString::number(a3[0])+".png");
         QPixmap dest=pix.scaled(ui->label_13->size(),Qt::KeepAspectRatio);
         ui->label_13->setPixmap(dest);

         ui->label_14->resize(61,49);
         QPixmap pix2("D:/QT_PROJECT/Bobing/dice/"+QString::number(a3[1])+".png");
         QPixmap dest2=pix2.scaled(ui->label_14->size(),Qt::KeepAspectRatio);
         ui->label_14->setPixmap(dest2);

         ui->label_15->resize(61,49);
         QPixmap pix3("D:/QT_PROJECT/Bobing/dice/"+QString::number(a3[2])+".png");
         QPixmap dest3=pix3.scaled(ui->label_15->size(),Qt::KeepAspectRatio);
         ui->label_15->setPixmap(dest3);

         ui->label_16->resize(61,49);
         QPixmap pix4("D:/QT_PROJECT/Bobing/dice/"+QString::number(a3[3])+".png");
         QPixmap dest4=pix4.scaled(ui->label_16->size(),Qt::KeepAspectRatio);
         ui->label_16->setPixmap(dest4);

         ui->label_17->resize(61,49);
         QPixmap pix5("D:/QT_PROJECT/Bobing/dice/"+QString::number(a3[4])+".png");
         QPixmap dest5=pix5.scaled(ui->label_17->size(),Qt::KeepAspectRatio);
         ui->label_17->setPixmap(dest5);

         ui->label_18->resize(61,49);
         QPixmap pix6("D:/QT_PROJECT/Bobing/dice/"+QString::number(a3[5])+".png");
         QPixmap dest6=pix6.scaled(ui->label_12->size(),Qt::KeepAspectRatio);
         ui->label_18->setPixmap(dest6);
     }
     if(Widget::player_num>=4)
     {
         ui->label_19->resize(61,49);
         QPixmap pix("D:/QT_PROJECT/Bobing/dice/"+QString::number(a4[0])+".png");
         QPixmap dest=pix.scaled(ui->label_19->size(),Qt::KeepAspectRatio);
         ui->label_19->setPixmap(dest);

         ui->label_20->resize(61,49);
         QPixmap pix2("D:/QT_PROJECT/Bobing/dice/"+QString::number(a4[1])+".png");
         QPixmap dest2=pix2.scaled(ui->label_20->size(),Qt::KeepAspectRatio);
         ui->label_20->setPixmap(dest2);

         ui->label_21->resize(61,49);
         QPixmap pix3("D:/QT_PROJECT/Bobing/dice/"+QString::number(a4[2])+".png");
         QPixmap dest3=pix3.scaled(ui->label_21->size(),Qt::KeepAspectRatio);
         ui->label_21->setPixmap(dest3);

         ui->label_22->resize(61,49);
         QPixmap pix4("D:/QT_PROJECT/Bobing/dice/"+QString::number(a4[3])+".png");
         QPixmap dest4=pix4.scaled(ui->label_22->size(),Qt::KeepAspectRatio);
         ui->label_22->setPixmap(dest4);

         ui->label_23->resize(61,49);
         QPixmap pix5("D:/QT_PROJECT/Bobing/dice/"+QString::number(a4[4])+".png");
         QPixmap dest5=pix5.scaled(ui->label_23->size(),Qt::KeepAspectRatio);
         ui->label_23->setPixmap(dest5);

         ui->label_24->resize(61,49);
         QPixmap pix6("D:/QT_PROJECT/Bobing/dice/"+QString::number(a4[5])+".png");
         QPixmap dest6=pix6.scaled(ui->label_24->size(),Qt::KeepAspectRatio);
         ui->label_24->setPixmap(dest6);
     }



}
void  one_player_mode::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);


}
void one_player_mode::calculate()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.dat");


    if(db.open())
    {

        qDebug()<<"okokokoko"<<endl;

    }
    QSqlQuery query;
    if(a11[3]==4&&a11[0]==2)
    {
        begin::p_point+=100;
        ui->label_32->setText("YOU ARE RANK 1 YOU WIN GOLD");
        query.prepare("update User set point=:point WHERE name=:name");
        query.bindValue(":point", begin::p_point);
        query.bindValue(":name", begin::name);
        query.exec();
    }
   else if(a11[3]==6)
    {
        begin::p_point+=90;
        ui->label_32->setText("YOU ARE RANK 2 YOU WIN GOLD");
        query.prepare("update User set point=:point WHERE name=:name");
        query.bindValue(":point", begin::p_point);
        query.bindValue(":name", begin::name);
        query.exec();
    }
    else if(a11[0]==6)
    {
        begin::p_point+=80;
        ui->label_32->setText("YOU ARE RANK 3 YOU WIN GOLD");
        query.prepare("update User set point=:point WHERE name=:name");
        query.bindValue(":point", begin::p_point);
        query.bindValue(":name", begin::name);
        query.exec();
    }
    else if(a11[1]==6)
    {
       begin::p_point+=70;
        ui->label_32->setText("YOU ARE RANK 4 YOU WIN GOLD");
        query.prepare("update User set point=:point WHERE name=:name");
        query.bindValue(":point", begin::p_point);
        query.bindValue(":name", begin::name);
        query.exec();
    }
    else if(a11[3]==5)
    {
        begin::p_point+=60;
        ui->label_32->setText("YOU ARE RANK 5 YOU WIN GOLD");
        query.prepare("update User set point=:point WHERE name=:name");
        query.bindValue(":point", begin::p_point);
        query.bindValue(":name", begin::name);
        query.exec();
    }
    else if(a11[1]==5)
    {
        begin::p_point+=50;
        ui->label_32->setText("YOU ARE RANK 6 YOU WIN GOLD");
        query.prepare("update User set point=:point WHERE name=:name");
        query.bindValue(":point", begin::p_point);
        query.bindValue(":name", begin::name);
        query.exec();
    }
    else if(a11[3]==4)
    {
        begin::p_point+=40;
        ui->label_32->setText("YOU ARE RANK 7 YOU WIN GOLD");
        query.prepare("update User set point=:point WHERE name=:name");
        query.bindValue(":point", begin::p_point);
        query.bindValue(":name", begin::name);
        query.exec();
    }

    else if(a11[3]==4)
    {
        begin::p_point+=20;
        ui->label_32->setText("YOU ARE RANK 9 YOU WIN BRONZE");
        query.prepare("update User set point=:point WHERE name=:name");
        query.bindValue(":point", begin::p_point);
        query.bindValue(":name", begin::name);
        query.exec();
    }
   else if(a11[0]==1&&a11[1]==1&&a11[2]==1&&a11[3]==1&&a11[4]==1&&a11[5]==1)
    {
        begin::p_point+=30;
         ui->label_32->setText("YOU ARE RANK 8 YOU WIN SLVER");
         query.prepare("update User set point=:point WHERE name=:name");
         query.bindValue(":point", begin::p_point);
         query.bindValue(":name", begin::name);
         query.exec();
    }
   else if(a11[1]==4)
   {
       begin::p_point+=10;
       ui->label_32->setText("YOU ARE RANK 10 ");
       query.prepare("update User set point=:point WHERE name=:name");
       query.bindValue(":point", begin::p_point);
       query.bindValue(":name", begin::name);
       query.exec();
   }
   else if(a11[3]==2)
   {
       begin::p_point+=5;
       ui->label_32->setText("YOU ARE RANK 11 ");
       query.prepare("update User set point=:point WHERE name=:name");
       query.bindValue(":point", begin::p_point);
       query.bindValue(":name", begin::name);
       query.exec();
   }
   else if(a11[3]==1)
   {
       begin::p_point+=2;
       ui->label_32->setText("YOU ARE RANK 12 ");
       query.prepare("update User set point=:point WHERE name=:name");
       query.bindValue(":point", begin::p_point);
       query.bindValue(":name", begin::name);
       query.exec();
   }
   else
    {
        ui->label_32->setText("SORRY YOU WIN NOTHING");

    }
    while(query.next())
    {

        qDebug()<<query.value(0).toInt()<<query.value(1).toString()<<query.value(2).toString()<<query.value(3).toString();
    }

}


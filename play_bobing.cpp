#include "play_bobing.h"
#include "ui_play_bobing.h"
#include <QDebug>
#include "one_player_mode.h"
#include <QLabel>
#include <QMovie>

Play_Bobing::Play_Bobing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Play_Bobing)
{
    ui->setupUi(this);


    timer1 = new QTimer();
    connect(timer1, SIGNAL(timeout()), SLOT(result()));
    timer1->setSingleShot(true);
    ui->label->setPixmap(QPixmap("D:/QT_PROJECT/Bobing/photos/bow.png"));
    ui->label->setScaledContents(true);
    paintEvent();



}

Play_Bobing::~Play_Bobing()
{
    delete ui;
}
void Play_Bobing::result()
{
    //timer1->stop();
    one_player_mode  *result1=new one_player_mode ();
    this->close();
    result1->show();


}
void Play_Bobing::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);


}
void Play_Bobing::timestar()
{
     timer1->start(2000);


     QMovie *movie1 = new QMovie("D:/QT_PROJECT/Bobing/photos/2.gif");
     ui->label_2->setMovie(movie1);
     ui->label_2->setScaledContents(true);
     movie1->start();
     QMovie *movie2 = new QMovie("D:/QT_PROJECT/Bobing/photos/4.gif");
     ui->label_3->setMovie(movie2);
     ui->label_3->setScaledContents(true);
     movie2->start();

     QMovie *movie3 = new QMovie("D:/QT_PROJECT/Bobing/photos/5.gif");
     ui->label_4->setMovie(movie3);
     ui->label_4->setScaledContents(true);
     movie3->start();

     QMovie *movie4 = new QMovie("D:/QT_PROJECT/Bobing/photos/6.gif");
     ui->label_5->setMovie(movie4);
     ui->label_5->setScaledContents(true);
     movie4->start();

     QMovie *movie5 = new QMovie("D:/QT_PROJECT/Bobing/photos/2.gif");
     ui->label_6->setMovie(movie5);
     ui->label_6->setScaledContents(true);
     movie5->start();

     QMovie *movie6 = new QMovie("D:/QT_PROJECT/Bobing/photos/4.gif");
     ui->label_7->setMovie(movie6);
     ui->label_7->setScaledContents(true);
     movie6->start();

}

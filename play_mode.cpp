#include "play_mode.h"
#include "ui_play_mode.h"
#include "play_bobing.h"
#include "widget.h"
Play_Mode::Play_Mode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Play_Mode)
{
    ui->setupUi(this);
    paintEvent();

}

Play_Mode::~Play_Mode()
{
    delete ui;
}
void Play_Mode:: one_player()
{
    Play_Bobing *PLB=new Play_Bobing();
    this->close();
    PLB->show();
    Widget::player_num=1;

}
void Play_Mode::two_player()
{
    Play_Bobing *PLB=new Play_Bobing();
    this->close();
    PLB->show();
    Widget::player_num=2;
}
void Play_Mode::three_player()
{
    Play_Bobing *PLB=new Play_Bobing();
    this->close();
    PLB->show();
    Widget::player_num=3;
}
void Play_Mode::four_player()
{
    Play_Bobing *PLB=new Play_Bobing();
    this->close();
    PLB->show();
    Widget::player_num=4;
}



void Play_Mode::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);


}


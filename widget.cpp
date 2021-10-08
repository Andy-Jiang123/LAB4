#include "widget.h"
#include "begin.h"
#include "ui_widget.h"
#include "mode.h"
#include "rules.h"
#include <QPainter>
#include "prize.h"
#include "exchange.h"
int Widget::player_num=0;
int Widget::free_point=1;
int Widget::play_point=0;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    paintEvent();
    ui->label_3->setText(QString::number(begin::p_point));
    ui->label_4->setText(QString::number(begin::f_point));

}

Widget::~Widget()
{
    delete ui;
}
void Widget::open_mode()
{

    mode *game_mode=new mode();
    this->close();
    game_mode->show();

}
void Widget::open_rule()
{
    rules *rule=new rules();
    this->close();
    rule->show();
}
void Widget::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);


}
void Widget::open_prize()
{
    prize *prize_open=new prize();
    this->close();
    prize_open->show();
}
void Widget::open_store()
{
    exchange *ex=new exchange();
    ex->show();
}

#include "prize.h"
#include "ui_prize.h"
#include "widget.h"

prize::prize(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::prize)
{
    ui->setupUi(this);
    paintEvent();
    QPixmap pix("D:/QT_PROJECT/Bobing/photos/car.png");
    QPixmap dest=pix.scaled(ui->label_3->size(),Qt::KeepAspectRatio);
    ui->label_3->setPixmap(dest);

    QPixmap pix2("D:/QT_PROJECT/Bobing/photos/phone.png");
    QPixmap dest2=pix2.scaled(ui->label_5->size(),Qt::KeepAspectRatio);
    ui->label_5->setPixmap(dest2);

    QPixmap pix3("D:/QT_PROJECT/Bobing/photos/watch.jpeg");
    QPixmap dest3=pix3.scaled(ui->label_7->size(),Qt::KeepAspectRatio);
    ui->label_7->setPixmap(dest3);

    QPixmap pix4("D:/QT_PROJECT/Bobing/photos/other.png");
    QPixmap dest4=pix4.scaled(ui->label_9->size(),Qt::KeepAspectRatio);
    ui->label_9->setPixmap(dest4);
}

prize::~prize()
{
    delete ui;
}
void prize::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);


}
void prize::click_return()
{
    Widget *main=new Widget();
    this->close();
    main->show();
}


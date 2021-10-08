#include "payment_mode.h"
#include "ui_payment_mode.h"

Payment_Mode::Payment_Mode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Payment_Mode)
{
    ui->setupUi(this);
    paintEvent();
}

Payment_Mode::~Payment_Mode()
{
    delete ui;
}
void Payment_Mode::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);


}

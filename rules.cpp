#include "rules.h"
#include "ui_rules.h"
#include "widget.h"
rules::rules(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rules)
{
    ui->setupUi(this);
    paintEvent();
    ui->label->resize(341,411);
    QPixmap pix("D:/QT_PROJECT/Bobing/photos/rule.png");
    QPixmap dest=pix.scaled(ui->label->size(),Qt::KeepAspectRatio);
    ui->label->setPixmap(dest);
}

rules::~rules()
{
    delete ui;
}
void rules::paintEvent()
{
    QPalette pal =this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("D:/QT_PROJECT/Bobing/photos/background.png")));
    setPalette(pal);


}
void  rules::click_return()
{
    Widget *main=new Widget();
    this->close();
    main->show();
}


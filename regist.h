#ifndef REGIST_H
#define REGIST_H

#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QWidget>
#include <QMessageBox>

namespace Ui {
class regist;
}

class regist : public QWidget
{
    Q_OBJECT

public:
    explicit regist(QWidget *parent = nullptr);
    ~regist();
    void paintEvent();

private:
    Ui::regist *ui;
public slots:
    void click_ok();
    void click_return();

};

#endif // REGIST_H

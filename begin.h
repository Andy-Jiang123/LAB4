#ifndef BEGIN_H
#define BEGIN_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

#include <QSqlError>

namespace Ui {
class begin;
}

class begin : public QWidget
{
    Q_OBJECT

public:
    explicit begin(QWidget *parent = nullptr);
    ~begin();
    void paintEvent();
    static int f_point;
    static int p_point;
    static QString name;






private:
    Ui::begin *ui;
public slots:
    void sign_in();
    void registerer();

};

#endif // BEGIN_H

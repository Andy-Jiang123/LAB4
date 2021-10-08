#ifndef EXCHANGE_H
#define EXCHANGE_H

#include <QWidget>

namespace Ui {
class exchange;
}

class exchange : public QWidget
{
    Q_OBJECT

public:
    explicit exchange(QWidget *parent = nullptr);
    ~exchange();
    void paintEvent();


private:
    Ui::exchange *ui;
public slots:
    void click_return();
    void prize_1();
    void prize_2();
    void prize_3();
    void prize_4();
    void prize_5();
    void prize_6();
};

#endif // EXCHANGE_H

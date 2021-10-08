#ifndef PAYMENT_MODE_H
#define PAYMENT_MODE_H

#include <QWidget>

namespace Ui {
class Payment_Mode;
}

class Payment_Mode : public QWidget
{
    Q_OBJECT

public:
    explicit Payment_Mode(QWidget *parent = nullptr);
    ~Payment_Mode();
    void paintEvent();

private:
    Ui::Payment_Mode *ui;
};

#endif // PAYMENT_MODE_H

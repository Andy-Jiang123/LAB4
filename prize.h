#ifndef PRIZE_H
#define PRIZE_H

#include <QWidget>

namespace Ui {
class prize;
}

class prize : public QWidget
{
    Q_OBJECT

public:
    explicit prize(QWidget *parent = nullptr);
    ~prize();
    void paintEvent();

private:
    Ui::prize *ui;
public slots:
    void click_return();
};

#endif // PRIZE_H

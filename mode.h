#ifndef MODE_H
#define MODE_H

#include <QWidget>

namespace Ui {
class mode;
}

class mode : public QWidget
{
    Q_OBJECT

public:
    explicit mode(QWidget *parent = nullptr);
    ~mode();
    void paintEvent();



private:
    Ui::mode *ui;
public slots:
    void free_mode();
    void pay_mode();
    void click_return();

};

#endif // MODE_H

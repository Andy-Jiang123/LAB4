#ifndef RULES_H
#define RULES_H

#include <QWidget>

namespace Ui {
class rules;
}

class rules : public QWidget
{
    Q_OBJECT

public:
    explicit rules(QWidget *parent = nullptr);
    ~rules();
    void paintEvent();


private:
    Ui::rules *ui;
public slots:
    void click_return();
};

#endif // RULES_H

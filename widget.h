#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    static int player_num;
    static int free_point;
    static int play_point;
    void paintEvent();

private:
    Ui::Widget *ui;
public slots:
     void open_mode();
     void open_rule();
     void open_prize();
     void open_store();


};

#endif // WIDGET_H

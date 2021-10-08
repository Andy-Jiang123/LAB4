#ifndef PLAY_MODE_H
#define PLAY_MODE_H

#include <QWidget>

namespace Ui {
class Play_Mode;
}

class Play_Mode : public QWidget
{
    Q_OBJECT

public:
    explicit Play_Mode(QWidget *parent = nullptr);
    ~Play_Mode();

private:
    Ui::Play_Mode *ui;
public slots:
    void one_player();
    void two_player();
    void three_player();
    void four_player();
    void paintEvent();

};

#endif // PLAY_MODE_H

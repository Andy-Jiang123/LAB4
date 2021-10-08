#ifndef PLAY_BOBING_H
#define PLAY_BOBING_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class Play_Bobing;
}

class Play_Bobing : public QWidget
{
    Q_OBJECT

public:
    explicit Play_Bobing(QWidget *parent = nullptr);
    ~Play_Bobing();
    QTimer *timer1;

private:
    Ui::Play_Bobing *ui;
public slots:
    void result();
    void paintEvent();
    void timestar();
    //void start();
};

#endif // PLAY_BOBING_H

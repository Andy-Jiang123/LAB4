#ifndef ONE_PLAYER_MODE_H
#define ONE_PLAYER_MODE_H

#include <QWidget>
#
namespace Ui {
class one_player_mode;
}

class one_player_mode : public QWidget
{
    Q_OBJECT

public:
    explicit one_player_mode(QWidget *parent = nullptr);
    ~one_player_mode();
    void randow_number();
    void paintEvent();
    void show_result();
    void calculate();


    int a1[6];
    int a11[6]={0};

    int a2[6];
    int a22[6]={0};

    int a3[6];
    int a33[6]={0};

    int a4[6];
    int a44[6]={0};

private:
    Ui::one_player_mode *ui;
public slots:
    void open_exchange();
    void open_return();
};

#endif // ONE_PLAYER_MODE_H

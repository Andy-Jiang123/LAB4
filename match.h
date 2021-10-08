#ifndef MATCH_H
#define MATCH_H

#include <QWidget>

namespace Ui {
class Match;
}

class Match : public QWidget
{
    Q_OBJECT

public:
    explicit Match(QWidget *parent = nullptr);
    ~Match();
    void paintEvent();


private:
    Ui::Match *ui;
};

#endif // MATCH_H

#include "widget.h"
#include "begin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    begin b;

    b.show();

    return a.exec();
}

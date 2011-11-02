#include <QtGui/QApplication>
#include "myClock.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    myClock w;
    w.show();

    return a.exec();
}

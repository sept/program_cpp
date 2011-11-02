#include <QtGui/QApplication>
#include "clock.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    clock w;
    w.show();
    return a.exec();
}

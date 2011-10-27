#include <QtGui/QApplication>
#include "class.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    class w;
    w.show();

    return a.exec();
}

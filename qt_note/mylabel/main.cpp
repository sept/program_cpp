#include <QtGui/QApplication>
#include "mylabel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mylabel w;
    w.show();

    return a.exec();
}

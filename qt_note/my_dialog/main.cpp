#include <QtGui/QApplication>
#include "my_dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    my_dialog w;
    w.show();

    return a.exec();
}

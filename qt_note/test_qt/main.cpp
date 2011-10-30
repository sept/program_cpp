/*使用 qt 向文件中写入数据*/
#include <QtGui/QApplication>
#include <iostream>
#include "test_qt.h"
#include <QFile>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFile file("test.txt");
    if (!file.open(QIODevice::WriteOnly))
    {
        cerr<<"Cannot open file for writing:"<<qPrintable(file.errorString())<<endl;
       // return -1;
    }

    QTextStream out(&file);
    out<<"Thomas M.Disch:"<<endl;

    return 0;
}

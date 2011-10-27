#include <QtCore/QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<double> vect(5);
    vect[0] = 1.0;
    vect[1] = 2.11;
    vect[2] = 3.11;
    vect[3] = 4.11;
    vect[4] = 5.11;

    double sum = 0.0;
    for (int i = 0; i < vect.count(); i++)
    {
        sum += vect[i];
        qDebug()<<sum;
    }
    return 0;
}

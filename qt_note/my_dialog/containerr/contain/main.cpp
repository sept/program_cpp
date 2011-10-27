/*Qt的容器类*/
#include <QtCore/QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<double>vect;
    vect.append(1.0);
    vect.append(0.43214);

    double sum = 0.0;
    for (int i = 0; i < vect.count(); ++i)
    {
        sum += vect[i];
        qDebug()<<sum;
    }
    return 0;
}

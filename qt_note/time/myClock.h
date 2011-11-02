#ifndef TIME_H
#define TIME_H

#include <QLCDNumber>
#include <QWidget>
//#include <QWidget>
//#include <QString>

class myClock:public QLCDNumber
{
    Q_OBJECT
public:
    myClock(QWidget *parent = NULL);
    ~myClock();

private slots:
    void show_time();
};

#endif // TIME_H

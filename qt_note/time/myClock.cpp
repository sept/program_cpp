#include <QTime>
#include <QTimer>
#include "myClock.h"

myClock::myClock(QWidget *parent)
:QLCDNumber(parent)
{
    setSegmentStyle(Filled);
    QTimer *timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(show_time()));
    timer->start(1000);
}

myClock::~myClock()
{

}

void myClock::show_time()
{
    QString time = QTime::currentTime().toString("hh:mm:ss");
    setNumDigits(8);
    display(time);
}

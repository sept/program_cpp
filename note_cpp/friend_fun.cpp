/*友元成员函数 实例*/
#include <iostream>
using namespace std;

class Date;

class Time
{
public:
    Time(int, int, int);
    void display(Date &);

private:
    int hour;
    int minute;
    int sec;
};

class Date
{
public:
    Date(int, int, int);
    friend void Time::display(Date &);

private:
    int mouth;
    int day;
    int year;
};


Time::Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    sec = s;
}

void Time::display(Date &d)
{
    cout<<d.mouth<<"/"<<d.day<<"/"<<d.year<<endl;
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

Date::Date(int m, int d, int y)
{
    mouth = m;
    day = d;
    year = y;
}

int main()
{
    Time t1(10,13,56);
    Date d1(12,25,2004);

    t1.display(d1);

    return 0;
}

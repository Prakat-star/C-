#include <iostream>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    friend void add(Time, Time);
};

void add(Time t1, Time t2)
{
    int h, m, s;

    s = t1.second + t2.second;
    m = t1.minute + t2.minute;
    h = t1.hour + t2.hour;

    if (s >= 60)
    {
        m += s / 60;
        s %= 60;
    }

    if (m >= 60)
    {
        h += m / 60;
        m %= 60;
    }

    if (h >= 24)
    {
        h %= 24;
    }

    cout << "Total Time = "
         << h << ":"
         << m << ":"
         << s;
}

int main()
{
    Time t1(10, 45, 50);
    Time t2(5, 30, 20);

    add(t1, t2);

    return 0;
}
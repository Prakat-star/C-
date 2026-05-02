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

    // Post-increment operator
    Time operator++(int)
    {
        Time temp = *this;

        second++;

        if (second >= 60)
        {
            second = 0;
            minute++;
        }

        if (minute >= 60)
        {
            minute = 0;
            hour++;
        }

        if (hour >= 24)
        {
            hour = 0;
        }

        return temp;
    }

    void display()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    Time t1(10, 59, 59);

    t1++;   // post increment

    t1.display();

    return 0;
}
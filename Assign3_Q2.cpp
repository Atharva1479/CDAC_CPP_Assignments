#include <iostream>

using namespace std;

class Time
{

    int hour;
    int minute;
    int seconds;

public:
    Time() : hour(0), minute(0), seconds(0) {};

    Time(int h, int m, int s) : hour(h), minute(m), seconds(s) {};

    void setHour(int hour)
    {

        this->hour = hour;
    }

    void getHour()
    {

        cout << "Hour: " << hour << endl;
    }

    void setMinute(int minute)
    {

        this->minute = minute;
    }

    void getMinute()
    {

        cout << "Minute: " << minute << endl;
    }

    void setSeconds(int seconds)
    {

        this->seconds = seconds;
    }

    void getSeconds()
    {

        cout << "Second: " << seconds << endl;
    }

    void printTime()
    {

        cout << "Hour: Minute : Seconds :- " << hour << " : " << minute << " : " << seconds << endl;
    }
};

int main()
{
    int size = 5;
    Time *timeArr = new Time[size];

    for (int i = 0; i < size; i++)
    {

        timeArr[i].setHour(10 + i);
        timeArr[i].setMinute(30 + i);
        timeArr[i].setSeconds(59);
        timeArr[i].printTime();
    }

    delete[] timeArr;
    timeArr = NULL;
    return 0;
}
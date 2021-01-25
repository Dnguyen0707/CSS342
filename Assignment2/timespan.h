/**
 * timespan.h is a declaration of all the variables and functions
 * */

#ifndef ASS2_TIMESPAN_H
#define ASS2_TIMESPAN_H

#include <iostream>
#include <cmath>

using namespace std;

class TimeSpan
{
    //Print out the time
    friend ostream &operator<<(ostream &out, const TimeSpan &ts);

public:
    //explicit TimeSpan(int Hour = 0, int Minute = 0, int Second = 0);
    explicit TimeSpan(double hour = 0, double minute = 0, double second = 0);

    //add
    TimeSpan operator+(const TimeSpan &ts) const;

    //subtract
    TimeSpan operator-(const TimeSpan &ts) const;

    //check equality
    bool operator==(const TimeSpan &ts) const;

    //check if not equal
    bool operator!=(const TimeSpan &ts) const;

    //multiply timespan by an unsigned number
    TimeSpan operator*(unsigned int number) const;

    //add into the original Timespan
    void operator+=(unsigned int number);

    //subtract from the original Timespan
    void operator-=(unsigned int number);

    //comparing a different TimeSpan to check if it's less than input TimeSpan
    bool operator<(const TimeSpan &ts) const;

    //comparing a different TimeSpan to check if it's more than input TimeSpan
    bool operator>(const TimeSpan &ts) const;

    //comparing a second input to check if it's less than or equal to input seconds
    bool operator<=(unsigned int number) const;

    //comparing a second input to check if it's more than or equal to input seconds
    bool operator>=(unsigned int number) const;

    //hour component of timespan
    int getHour() const;

    //store hour
    void setHour(int hour);

    //minute component of timespan
    int getMinute() const;

    //store minute
    void setMinute(int minute);

    //second component of timespan
    int getSecond() const;

    //store second
    void setSecond(int second);

    //get the total second of the time
    long getTotalSecond();

    //setter for totalSecond
    void setTotalSecond(long number);

    //true if timespan is 0 or larger
    bool isPositive() const;


private:
    //standard variable for time
    double hour;
    double minute;
    double second;

    //total second in the time
    long totalSecond;

    //convert TimeSpan variable into a string to print
    static string convert(int hour, int minute, int second, long totalSecond);

    //convert totalTime into Hour, Minute, Second
    void timeConvert(long totalSecond);
};

#endif // ASS2_TIMESPAN_H
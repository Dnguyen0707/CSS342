/**
 * Implementation of functions declared in timespan.h
 * */

#include <string>
#include "timespan.h"

/*
 * purpose: Print out the time
 * precondition: take ostream and TimeSpan as a input
 * postcondition: return out ostream
 */
ostream &operator<<(ostream &out, const TimeSpan &ts)
{
    string retOut = TimeSpan::convert(ts.getHour(), ts.getMinute(), ts.getSecond(), ts.totalSecond);
    out << retOut;
    return out;
}

/*
 * purpose: convert TimeSpan variables into a string to print
 * precondition: take hour, minute, second and totalSecond as int input
 * postcondition: return the timespan as string
 */
string TimeSpan::convert(int hour, int minute, int second, long totalSecond)
{
    string retVal;
    string retHour = to_string(hour);
    string retMinute = to_string(minute);
    string retSecond = to_string(second);

    if (minute == 0)
    {
        retMinute = "00";
    }
    else if (minute < 10)
    {
        retMinute = "0" + to_string(minute);
    }

    if (second == 0)
    {
        retSecond = "00";
    }
    else if (second < 10 && second > 0)
    {
        retSecond = "0" + to_string(second);
    }
    else if (second < 0 && second >= -9 && totalSecond < 0)
    {
        int negative = (second * -1);
        retSecond = "0" + to_string(negative);
    }
    else if (second < -9 && totalSecond < 0)
    {
        int negative = second * -1;
        retSecond = to_string(negative);
    }

    if (totalSecond < 0)
    {
        retHour = "-" + retHour;
    }

    retVal = retHour + ":" + retMinute + ":" + retSecond;
    return retVal;
}

/*
 * explicit TimeSpan(int Hour = 0, int Minute = 0, int Second = 0);
 * purpose: a constructor for TimeSpan object
 * precondition: take hour, minute, second as a double input
 * postcondition: store the input into it's perspective variable
 */
TimeSpan::TimeSpan(double hour, double minute, double second)
{

    setTotalSecond((long) ((hour * 3600) + (minute * 60) + second));

    double storeHour = 0;
    storeHour = (double) this->totalSecond / 3600;
    setHour((int) storeHour);

    double storeMinute = 0;
    storeMinute = ((totalSecond - (this->hour * 3600)) / 60);
    setMinute((int) storeMinute);

    double storeSecond = 0;
    storeSecond = this->totalSecond - (this->hour * 3600) - (this->minute * 60);
    setSecond((int) storeSecond);
}


/*
 * purpose: return hour while converting total second to just hour, no decimal
 * precondition: doesn't take input
 * postcondition: return hour as int
 */
int TimeSpan::getHour() const
{
    double retHour = 0;
    retHour = ((this->totalSecond - (minute * 60) - (second))) / 3600;
    return (int) retHour;
}

/*
 * purpose: store hour
 * precondition: take hour as a int input
 * postcondition: stored hour into the object
 */
void TimeSpan::setHour(int hour)
{
    this->hour = hour;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
int TimeSpan::getMinute() const
{
    double retMinute = 0;
    retMinute = (this->totalSecond - (hour * 3600) - (second)) / 60;
    return (int) retMinute;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
void TimeSpan::setMinute(int minute)
{
    this->minute = minute;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
int TimeSpan::getSecond() const
{
    double retSecond = 0;
    retSecond = this->totalSecond - (hour * 3600) - (minute * 60);
    return (int) retSecond;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
void TimeSpan::setSecond(int second)
{
    this->second = second;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
long TimeSpan::getTotalSecond()
{
    long check = (long) ((hour * 3600) + (minute * 60) + (second * 60));
    if (totalSecond == check)
    {
        return totalSecond;
    }
    else
    {
        timeConvert(check);
        return totalSecond;
    }
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
void TimeSpan::timeConvert(long totalSecond)
{
    int hour = (int) (totalSecond / 3600);
    int minute = (int) (hour / 60);
    int second = (int) (totalSecond % 60);

    setHour(hour);
    setMinute(minute);
    setSecond(second);
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
void TimeSpan::setTotalSecond(long number)
{
    this->totalSecond = number;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
bool TimeSpan::isPositive() const
{
    return this->totalSecond >= 0;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
TimeSpan TimeSpan::operator+(const TimeSpan &ts) const
{
    TimeSpan tsSum;
    tsSum.totalSecond = this->totalSecond + ts.totalSecond;
    return tsSum;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
TimeSpan TimeSpan::operator-(const TimeSpan &ts) const
{
    TimeSpan tsSub;
    tsSub.totalSecond = this->totalSecond - ts.totalSecond;
    return tsSub;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
TimeSpan TimeSpan::operator*(unsigned int number) const
{
    TimeSpan tsLarge;
    tsLarge.totalSecond = this->totalSecond * (long) number;
    return tsLarge;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
bool TimeSpan::operator==(const TimeSpan &ts) const
{
    return this->totalSecond == ts.totalSecond;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
bool TimeSpan::operator!=(const TimeSpan &ts) const
{
    return this->totalSecond != ts.totalSecond;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
void TimeSpan::operator+=(unsigned int number)
{
    setTotalSecond(getTotalSecond() + number);
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
void TimeSpan::operator-=(unsigned int number)
{
    setTotalSecond(getTotalSecond() - number);
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
bool TimeSpan::operator<(const TimeSpan &ts) const
{
    return this->totalSecond < ts.totalSecond;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
bool TimeSpan::operator>(const TimeSpan &ts) const
{
    return this->totalSecond > ts.totalSecond;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
bool TimeSpan::operator<=(unsigned int number) const
{
    return this->totalSecond <= number;
}

/*
 * purpose:
 * precondition:
 * postcondition:
 */
bool TimeSpan::operator>=(unsigned int number) const
{
    return this->totalSecond >= number;
}


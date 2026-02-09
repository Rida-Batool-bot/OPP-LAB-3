#include <iostream>
#include <string>
using namespace std;

class WeekDays
{
private:
    string Days[7];
    int CurrentDay;

public:
    WeekDays()
    {
Days[0] = "monday";
Days[1] = "tuesday";
Days[2] = "wednesday";
Days[3] = "thursday";
Days[4] = "friday";
Days[5] = "saturday";
Days[6] = "sunday";
        CurrentDay = 0;
    }

    WeekDays(int day)
    {
Days[0] = "monday";
Days[1] = "tuesday";
Days[2] = "wednesday";
Days[3] = "thursday";
Days[4] = "friday";
Days[5] = "saturday";
Days[6] = "sunday";

        CurrentDay = day % 7;
    }

    string getCurrentDay()
    {
        return Days[CurrentDay];
    }

    string getNextDay()
    {
        int nextDay = (CurrentDay + 1) % 7;
        return Days[nextDay];
    }

    string getPreviousDay()
    {
        int previousDay = CurrentDay - 1;

        if (previousDay < 0)
        {
            previousDay = 6;
        }

        return Days[previousDay];
    }

    string getNthDayFromToday(int n)
    {
        int futureDay = (CurrentDay + n) % 7;
        return Days[futureDay];
    }
};

int main()
{
    int dayNumber;
    int n;

    cout << "Enter current day number: ";
    cin >> dayNumber;

    WeekDays today(dayNumber);

    cout << "current day is: " << today.getCurrentDay() << endl;

    cout << "next day is: " << today.getNextDay() << endl;
    
    cout << "prvious day was: " << today.getPreviousDay() << endl;

    cout << "Enter number of days from today: ";
    cin >> n;

    cout << "The day after " << n << " days will be: "
         << today.getNthDayFromToday(n) << endl;

    return 0;
}

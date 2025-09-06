#include <iostream>
#include <string>
using namespace std;
// Problem #11
struct sDate
{
    short Year;
    short Month;
    short Day;
};
// Problem #3
bool IsLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) ||
           (Year % 400 == 0);
}
short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;
    int NumberOfDays[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (IsLeapYear(Year) ? 29
                                            : 28)
                        : NumberOfDays[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}
bool IsLastMonthInYear(short Month)
{
    return (Month == 12);
}

short ReadDay()
{
    short Day = 0;
    cout << "\nPlease enter a Day to check ? ";
    cin >> Day;
    return Day;
}

// Problem #5

short ReadMonth()
{
    short Month = 0;

    cout << "\nPlease enter a Month to check ? ";
    cin >> Month;

    return Month;
}

// Problem #2

short ReadYear()
{
    short Year = 0;

    cout << "\nPlease enter a year to check ? ";
    cin >> Year;

    return Year;
}

// Problem #12

sDate ReadFullDate()
{
    sDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
}

int main()
{
    // Problem #15

    sDate Date = ReadFullDate();

    if (IsLastDayInMonth(Date))
        cout << "\nYes, Day is Last In Month.";

    else
        cout << "\nNo, Day is NOT Last In Month.";

    if (IsLastMonthInYear(Date.Month))
        cout << "\nYes, Month is Last In Year.";

    else
        cout << "\nNo, Month is NOT Last In Year.";

    system("pause>0");

    return 0;
}

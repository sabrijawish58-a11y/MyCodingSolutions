#include <iostream>
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

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

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

bool IsValidDate(sDate Date)
{
    if (Date.Day < 1 || Date.Day > 31)
        return false;

    if (Date.Month < 1 || Date.Month > 12)
        return false;

    if (Date.Month == 2)
    {
        if (IsLeapYear(Date.Year))
        {
            if (Date.Day > 29)
                return false;
        }
        else
        {
            if (Date.Day > 28)
                return false;
        }
    }
    short DaysInMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

    if (Date.Day > DaysInMonth)
        return false;

    return true;
}

short ReadDay()
{
    short Day = 0;

    cout << "\nPlease enter a Day to check ? ";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month = 0;

    cout << "\nPlease enter a Month to check ? ";
    cin >> Month;

    return Month;
}

short ReadYear()
{
    short Year = 0;

    cout << "\nPlease enter a year to check ? ";
    cin >> Year;

    return Year;
}

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

    sDate Date1 = ReadFullDate();

    if (IsValidDate(Date1))
        cout << "\nYes, Date is a validate date.\n";
    else
        cout << "\nNo, Date is a NOT validate date\n";

    system("pause>0");

    return 0;
}

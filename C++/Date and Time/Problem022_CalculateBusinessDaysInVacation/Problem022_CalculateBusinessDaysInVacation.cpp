#include <iostream>
#include <string>
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

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
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
sDate IncreaseDateByOneDay(sDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Month = 1;
            Date.Day = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }
    return Date;
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(sDate Date)
{
    return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    return arrDayNames[DayOfWeekOrder];
}

bool IsWeekend(sDate Date)
{

    short DayIndex = DayOfWeekOrder(Date);
    return (DayIndex == 6 || DayIndex == 5);
}
bool IsBusinessDay(sDate Date)
{

    return !IsWeekend(Date);
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
short CalculateVacationDays(sDate DateFrom, sDate DateTo)
{
    short DaysCount = 0;

    while (IsDate1BeforeDate2(DateFrom, DateTo))
    {
        if (IsBusinessDay(DateFrom))
            DaysCount++;
        DateFrom = IncreaseDateByOneDay(DateFrom);
    }

    return DaysCount;
}

int main()
{

    cout << "\nVacations Starts : \n";
    sDate DateFrom = ReadFullDate();

    cout << "\nVacations Ends : \n";
    sDate DateTo = ReadFullDate();

    cout << "\n\nVacation From : " << DayShortName(DayOfWeekOrder(DateFrom)) << " , "
         << DateFrom.Day << "/" << DateFrom.Month << "/" << DateFrom.Year << endl;

    cout << "\n\nVacation End : " << DayShortName(DayOfWeekOrder(DateTo)) << " , "
         << DateTo.Day << "/" << DateTo.Month << "/" << DateTo.Year << endl;

    cout << "\n\nActual Vacations Days is : " << CalculateVacationDays(DateFrom, DateTo);

    system("pause>0");

    return 0;
}
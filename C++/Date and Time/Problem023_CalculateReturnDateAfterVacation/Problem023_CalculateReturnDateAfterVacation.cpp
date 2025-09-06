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
    int NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
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

bool IsWeekEnd(sDate Date)
{

    short DayIndex = DayOfWeekOrder(Date);
    return (DayIndex == 6 || DayIndex == 5);
}
bool IsBusinessDay(sDate Date)
{
    return !IsWeekEnd(Date);
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
sDate CalculateVacationReturnDate(sDate DateFrom, short VacationDays)
{

    short WeekEndCounter = 0;
    while (IsWeekEnd(DateFrom))
    {
        DateFrom = IncreaseDateByOneDay(DateFrom);
    }

    for (short i = 1; i <= VacationDays + WeekEndCounter; i++)
    {

        if (IsWeekEnd(DateFrom))
            WeekEndCounter++;

        DateFrom = IncreaseDateByOneDay(DateFrom);
    }

    while (IsWeekEnd(DateFrom))
    {
        DateFrom = IncreaseDateByOneDay(DateFrom);
    }

    return DateFrom;
}

short ReadVacationDays()
{
    short Days;
    cout << "\nPlease enter vacation days? ";
    cin >> Days;
    return Days;
}

int main()
{

    cout << "\nVacation Starts: ";
    sDate DateFrom = ReadFullDate();

    short VacationDays = ReadVacationDays();

    sDate ReturnDate = CalculateVacationReturnDate(DateFrom, VacationDays);

    cout << "\n\nReturn Date: " << DayShortName(DayOfWeekOrder(ReturnDate)) << " , "
         << ReturnDate.Day << "/" << ReturnDate.Month << "/" << ReturnDate.Year << endl;
    system("pause>0");

    return 0;
}

#include <iostream>
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

struct stPeriod
{
    sDate StartDate;
    sDate EndDate;
};

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualDate2(sDate Date1, sDate Date2)
{
    return (Date1.Year == Date2.Year) ? ((
                                             Date1.Month == Date2.Month)
                                             ? ((Date1.Day == Date2.Day) ? true : false)
                                             : false)
                                      : false;
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

enum enDateCompare
{
    Before = -1,
    Equal = 0,
    After = 1
};
enDateCompare CompareDates(sDate Date1, sDate
                                            Date2)
{
    if (IsDate1BeforeDate2(Date1, Date2))
        return enDateCompare::Before;

    if (IsDate1EqualDate2(Date1, Date2))
        return enDateCompare::Equal;

    return enDateCompare::After;
}

bool IsOverlapPeriods(stPeriod Period1, stPeriod
                                            Period2)
{
    if (
        CompareDates(Period2.EndDate,
                     Period1.StartDate) == enDateCompare::Before ||
        CompareDates(Period2.StartDate,
                     Period1.EndDate) == enDateCompare::After)
        return false;

    else
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

stPeriod ReadPeriod()
{
    stPeriod Period;

    cout << "\nEnter Start Date:\n";
    Period.StartDate = ReadFullDate();

    cout << "\nEnter End Date:\n";
    Period.EndDate = ReadFullDate();

    return Period;
}

int main()
{

    cout << "\nEnter Period 1:";
    stPeriod Period1 = ReadPeriod();

    cout << "\nEnter Period 2:";
    stPeriod Period2 = ReadPeriod();

    if (IsOverlapPeriods(Period1, Period2))
        cout << "\nYes, Periods Overlap\n";
    else
        cout << "\nNo, Periods do not Overlap\n";

    system("pause>0");

    return 0;
}
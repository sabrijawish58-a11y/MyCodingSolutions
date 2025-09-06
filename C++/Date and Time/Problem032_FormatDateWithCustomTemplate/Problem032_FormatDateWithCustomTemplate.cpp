#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

vector<string> SplitString(string S1, string
                                          Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord;

    while ((pos = S1.find(Delim)) !=
           std::string::npos)
    {
        sWord = S1.substr(0, pos);

        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    }
    if (S1 != "")
    {
        vString.push_back(S1);
    }
    return vString;
}

string ReplaceWordInString(string S1, string StringToReplace, string sRepalceTo)
{
    short pos = S1.find(StringToReplace);

    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo);

        pos = S1.find(StringToReplace);
    }
    return S1;
}
string DateToString(sDate Date)
{
    return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" +
           to_string(Date.Year);
}

sDate StringToDate(string DateString)
{
    sDate Date;
    vector<string> vDate;

    vDate = SplitString(DateString, "/");

    Date.Day = stoi(vDate[0]);
    Date.Month = stoi(vDate[1]);
    Date.Year = stoi(vDate[2]);

    return Date;
}

string FormateDate(sDate Date, string DateFormat = "dd/mm/yyyy")
{
    string FormattedDateString = "";

    FormattedDateString = ReplaceWordInString(DateFormat, "dd",
                                              to_string(Date.Day));
    FormattedDateString = ReplaceWordInString(FormattedDateString, "mm",
                                              to_string(Date.Month));
    FormattedDateString = ReplaceWordInString(FormattedDateString, "yyyy",
                                              to_string(Date.Year));

    return FormattedDateString;
}

string ReadStringDate(string Message)
{
    string DateString;
    cout << Message;
    getline(cin >> ws, DateString);

    return DateString;
}

int main()
{

    string DateString = ReadStringDate("\nPlease Enter Date dd/mm/yyyy? ");

    sDate Date = StringToDate(DateString);

    cout << "\n"
         << FormateDate(Date) << "\n";
    cout << "\n"
         << FormateDate(Date, "yyyy/dd/mm") << "\n";
    cout << "\n"
         << FormateDate(Date, "mm/dd/yyyy") << "\n";
    cout << "\n"
         << FormateDate(Date, "mm-dd-yyyy") << "\n";
    cout << "\n"
         << FormateDate(Date, "dd-mm-yyyy") << "\n";
    cout << "\n"
         << FormateDate(Date, "Day:dd, Month:mm, Year:yyyy") << "\n";

    system("pause>0");
    return 0;
}
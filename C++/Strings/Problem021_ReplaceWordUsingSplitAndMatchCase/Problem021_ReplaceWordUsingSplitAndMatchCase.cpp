#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

string LowerAllString(string S3)
{

    for (int i = 0; i < S3.length(); i++)
    {
        S3[i] = tolower(S3[i]);
    }
    return S3;
}

vector<string> SplitString(string S9, string
                                          Delim)
{
    vector<string> vString;

    short pos = 0;
    string sWord;

    while ((pos = S9.find(Delim)) != std::string::npos)
    {

        sWord = S9.substr(0, pos);

        if (sWord != "")
        {
            vString.push_back(sWord);
        }

        S9.erase(0, pos + Delim.length());
    }

    if (S9 != "")
    {

        vString.push_back(S9);
    }
    return vString;
}
string JoinString(vector<string> vString, string Delim)
{
    string S1 = "";
    if (vString.empty())
        return "";

    for (string &s : vString)
    {
        S1 = S1 + s + Delim;
    }

    return S1.substr(0, S1.length() - Delim.length());
}

string ReplaceWordInStringUsingSplit(string S13, string StringToReplace, string sReplaceTo, bool MatchCase = true)
{
    vector<string> vString = SplitString(S13, " ");

    for (string &s : vString)
    {
        if (MatchCase)
        {
            if (s == StringToReplace)
            {
                s = sReplaceTo;
            }
        }
        else
        {
            if (LowerAllString(s) == LowerAllString(StringToReplace))
            {
                s = sReplaceTo;
            }
        }
    }
    return JoinString(vString, " ");
}

int main()
{

    string S13 = "Welcome to Jordan , Jordan is a nice country";
    string StringToReplace = "jordan";
    string ReplaceTo = "USA";

    cout << "\Original  String\n"
         << S13;

    cout << "\n\nReplace with Match Case :";
    cout << "\n"
         << ReplaceWordInStringUsingSplit(S13, StringToReplace,
                                          ReplaceTo);

    cout << "\n\nReplace with don't Match Case :";
    cout << "\n"
         << ReplaceWordInStringUsingSplit(S13, StringToReplace,
                                          ReplaceTo, false);

    system("pause>0");
}
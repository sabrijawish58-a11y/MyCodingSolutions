#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

string ReadString()
{
    string S1 = "";

    cout << "Pleas Enter your string ? \n";
    getline(cin, S1);

    return S1;
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

string ReverseWordsInString(string S11)
{
    vector<string> vString;
    string S2 = "";

    vString = SplitString(S11, " ");

    vector<string>::iterator iter = vString.end();

    while (iter != vString.begin())
    {
        --iter;
        S2 += *iter + " ";
    }

    S2 = S2.substr(0, S2.length() - 1); // remove last space.

    return S2;
}

int main()
{

    string S11 = ReadString();
    cout << "\n\nString after reversing words:";
    cout << "\n"
         << ReverseWordsInString(S11);

    system("pause>0");
}
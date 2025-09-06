#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string ReadString()
{
    string S1 = "";

    cout << "Pleas Enter your string ? \n";
    getline(cin, S1);

    return S1;
}

void PrintEachWordInString(string S9)
{
    string delim = " ";

    cout << "\nYour string words are : \n\n";
    short pos = 0;
    string sWord;

    while ((pos = S9.find(delim)) != std::string::npos)
    {

        sWord = S9.substr(0, pos);

        if (sWord != "")
        {
            cout << sWord << endl;
        }

        S9.erase(0, pos + delim.length());
    }

    if (S9 != "")
    {

        cout << S9 << endl;
    }
}

int main()
{

    PrintEachWordInString(ReadString());
    system("pause>0");
}
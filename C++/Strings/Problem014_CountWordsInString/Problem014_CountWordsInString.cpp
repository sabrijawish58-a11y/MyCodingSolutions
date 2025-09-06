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

short CountWords(string S9)
{
    string delim = " ";
    short Count = 0;
    short pos = 0;
    string sWord;

    while ((pos = S9.find(delim)) != std::string::npos)
    {

        sWord = S9.substr(0, pos);

        if (sWord != "")
        {
            Count++;
        }

        S9.erase(0, pos + delim.length());
    }

    if (S9 != "")
    {

        Count++;
    }
    return Count;
}

int main()
{

    string S9 = ReadString();
    cout << "\nThe number of words in your string is: ";
    cout << CountWords(S9);

    system("pause>0");
}
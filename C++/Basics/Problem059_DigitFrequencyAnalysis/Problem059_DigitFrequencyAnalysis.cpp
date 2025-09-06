#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
int CountDigitFrequency(int Number, short DigitToCheck)
{

    int Remainder = 0;
    short FreqCount = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;

        Number = Number / 10;

        if (DigitToCheck == Remainder)

        {
            FreqCount++;
        }
    }
    return FreqCount;
}

void PrintAllDigitsFrequency(int Number)
{

    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(Number, i);

        if (DigitFrequency > 0)
        {
            cout << "\n  Digit " << i << " Frequency is "
                 << DigitFrequency << " Time(s). \n";
        }
    }
}
int main()
{
    int Number = ReadPositiveNumber("Pleas enter the main Number ?");
    PrintAllDigitsFrequency(Number);
    return 0;
}
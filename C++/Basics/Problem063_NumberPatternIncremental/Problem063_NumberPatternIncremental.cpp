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
void PrintNumberPattern(int Number)
{

    cout << "\n";

    for (int i = 1; i <= Number; i++)
    {
        for (int j = 1; j <= i; j++)

        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    PrintNumberPattern(ReadPositiveNumber("Pleas enter a positie Number ?"));
    return 0;
}
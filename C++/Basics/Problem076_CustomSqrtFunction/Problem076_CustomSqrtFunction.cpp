#include <iostream>
#include <cmath>

using namespace std;

float MySqrt(float Number)
{
    return pow(Number, 0.5);
}

float ReadNumber()
{
    float Number;
    cout << "Please enter a number ? " << endl;
    cin >> Number;

    return Number;
}

int main()
{
    float Number = ReadNumber();

    cout << "My Sqrt Result : " << MySqrt(Number) << endl;
    cout << "C++ Sqrt Result : " << sqrt(Number) << endl;

    return 0;
}
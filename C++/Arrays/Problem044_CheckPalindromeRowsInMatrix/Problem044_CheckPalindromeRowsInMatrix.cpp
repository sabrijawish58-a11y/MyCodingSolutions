#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << "\n";
    }
}

// Problem #20

bool IsPalindromeMatrix(int Matrix[3][3], short Rows,
                        short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        //  اذإ لصو ققحتلا  ىلا فصتنملا لاف يعاد
        ققحتلل نم فرطلا رخلآا - ققحملا اقباس Cols / 2 for (short j = 0; j < Cols / 2; j++)
        {
            if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
                return false;
        }
    }

    return true;
}

int main()
{
    int Matrix[3][3] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};

    // Problem #20

    cout << "\n Matrix  :\n";
    PrintMatrix(Matrix, 3, 3);

    if (IsPalindromeMatrix(Matrix, 3, 3))
        cout << "\n YES : Matrix is Palindrome.\n";
    else
        cout << "\n No : Matrix is NOT Palindrome.\n";

    system("pause>0");
}
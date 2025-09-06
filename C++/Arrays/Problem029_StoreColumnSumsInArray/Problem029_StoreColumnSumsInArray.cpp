#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

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

int ColSum(int arr[3][3], short Rows, short ColNumber)
{

    int Sum = 0;

    for (short i = 0; i <= Rows - 1; i++)
    {
        Sum += arr[i][ColNumber];
    }
    return Sum;
}
void SumMatrixColsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (short i = 0; i < Cols; i++)
    {
        arrSum[i] = ColSum(arr, Rows, i);
    }
}

void PrintColsSumArray(int arr[3], short Cols)
{
    cout << "\nThe following are the sum of each Col in the matrix : \n";

    for (short j = 0; j < Cols; j++)
    {
        cout << " Col " << j + 1 << " Sum = " << arr[j] << endl;
    }
}

int main()
{

    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSum[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    SumMatrixColsInArray(arr, arrSum, 3, 3);
    PrintColsSumArray(arrSum, 3);

    system("pause>0");
}
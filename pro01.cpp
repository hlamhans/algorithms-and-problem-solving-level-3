#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;
int Random(int From, int To)
{
    int Number = rand() % (To - From + 1) + From;
    return (Number);
}
void FillMatrixWithRandomNumber(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr[i][j] = Random(1,100);
        }
    }
}

void PrintMatrixArr(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout<<setw(3)<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillMatrixWithRandomNumber(arr,3,3);
    PrintMatrixArr(arr,3,3);
}
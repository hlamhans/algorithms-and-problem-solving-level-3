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
            arr[i][j] = Random(1,10);
        }
    }
}

void PrintMatrixArr(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
            //cout<<setw(3)<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
}
void TotalArr(int arr1[3][3], int arr2[3][3], int arrTotal[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arrTotal[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3],arr2[3][3],arrTotal[3][3];
    cout<<"Matrix1:\n";
    FillMatrixWithRandomNumber(arr1,3,3);
    PrintMatrixArr(arr1,3,3);
    cout<<"\nMatrix2 :\n";
    FillMatrixWithRandomNumber(arr2,3,3);
    PrintMatrixArr(arr2,3,3);
    cout<<"\n Results: \n";
    TotalArr(arr1,arr2,arrTotal);
    PrintMatrixArr(arrTotal,3,3);


}
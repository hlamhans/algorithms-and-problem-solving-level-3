#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void FillMatrixWithRandomNumberCols(int arr[3][3], int Rows, int Cols)
{
    int num = 1;
    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Cols; j++)
        {
            arr[i][j] = num++;
        }
    }
}
void FillMatrixWithRandomNumberRows(int arr[3][3], int Rows, int Cols)
{
    int num = 1;
    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Cols; j++)
        {
            arr[j][i] = num++;
        }
    }
}
void PrintMatrixArr(int arr[3][3], int Rows, int Cols)
{
    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Cols; j++)
        {
            cout<<arr[i][j]<<"        ";
        }
        cout<<"\n";
    }
}

int main()
{
    int arr[3][3];
    cout<<"\nThe following is a 3x3 ordered matrix: \n";
    FillMatrixWithRandomNumberCols(arr,3,3);
    PrintMatrixArr(arr,3,3);
    cout<<"\nThe following is the transposed matrix :\n";
    FillMatrixWithRandomNumberRows(arr,3,3);
    PrintMatrixArr(arr,3,3);


}
#include<iostream>
#include<iomanip>
using namespace std;
bool IsNumberInMatrix(int Matrix[3][3], int Rows, int Cols, int Number)
{
    for(int i =0 ; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if(Matrix[i][j] == Number)
            {
                return true;
            }
        }
    }
    return false;
}
void PrintMatrix(int Matrix[3][3], int Rows, int Cols)
{
    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Cols; j++)
        {
            cout<<setw(3)<<Matrix[i][j]<<"  ";
        }
        cout<<"\n";
    }
}

void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols)
{
    int Number;
    for(int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Number = Matrix1[i][j];
            if(IsNumberInMatrix(Matrix2,Rows,Cols,Number))
            {
                cout<<setw(3)<<Number<<" ";
            }
        }
    }
}
int main()
{
    int matrix1[3][3] = {{1,24,34},{45,5,6},{14,44,5}};
    int matrix2[3][3] = {{1,2,3},{4,5,6},{1,4,5}};
    cout<<"\nMatrix1:\n";
    PrintMatrix(matrix1,3,3);
    cout<<"\nMatrix2:\n";
    PrintMatrix(matrix2,3,3);
    cout<<"\nIntersected Number are: ";
    PrintIntersectedNumbers(matrix1,matrix2,3,3);
}
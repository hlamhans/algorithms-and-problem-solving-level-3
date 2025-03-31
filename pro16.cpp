#include<iostream>
#include <iomanip>
using namespace std;
short CouterOfMatrix(int Matrix1[3][3], int Rows, int Cols, int Number)
{
    int counter = 0;
    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Cols; j++)
        {
            if(Matrix1[i][j] == Number)
            {
                counter++;
            }
        }
    }
    return counter;
}
bool IsSparseMatrix(int Matrix[3][3], int Rows, int Cols)
{
    short Matrixzise = Rows * Cols;
    return(CouterOfMatrix(Matrix,Rows,Cols,0) >= Matrixzise / 2);
}
void PrintMatrix(int Matrix1[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout <<setw(3)<<Matrix1[i][j]<<"    ";
        }
        cout <<"\n";
    }
}
int main()
{
    int Matrix[3][3] = {{5,8,06},{60,8,0},{0,8,0}};
    cout<<"\nMatrix1:\n";
    PrintMatrix(Matrix,3,3);
    if (IsSparseMatrix(Matrix,3,3))
    {
        cout<<"\nYes: it's Sparse ";
    }
    else
    {
        cout<<"\nNo: it's not sparse";
    }

}
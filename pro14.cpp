#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
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
bool CheckMatrixIsScalar(int Matrix1[3][3], int Rows, int Cols)
{
    int FirstDiagElement = Matrix1[0][0];
    for(int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if(i == j && Matrix1[i][j] != FirstDiagElement)
            {
                return false;
            }
            else if (i != j && Matrix1[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int Matrix1[3][3] = {{99,0,0},{0,99,0},{0,0,99}};
    //int Matrix1[3][3] = {{2,2,9},{8,7,4},{1,5,4}};

    cout<<"\nMatrix1 : \n";
    PrintMatrix(Matrix1,3,3);

    if(CheckMatrixIsScalar(Matrix1,3,3))
    {
        cout<<"\nYes : Matrix is Scalar. ";
    }
    else
    {
        cout<<"\nNo : Matrix is Not Scalar.";
    }
    system("pause>0");
}
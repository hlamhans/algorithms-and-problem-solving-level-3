#include<iostream>
#include<iomanip>
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
int CheckMinNuberInMatrix(int matrix[3][3],int Rows, int Cols)
{
    int Min = matrix[0][0];
    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Cols; j++)
        {
            if (matrix[i][j] < Min)
            {
                Min = matrix[i][j];
            }
        }
    }
    return Min;
}
int CheckMaxNuberInMatrix(int matrix[3][3],int Rows, int Cols)
{
    int max = matrix[0][0];
    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Cols; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
            }
        }
    }
    return max;
}
int main()
{
    srand((unsigned)time(NULL));
    int Matrix[3][3];
    FillMatrixWithRandomNumber(Matrix,3,3);
    cout<<"\nMatrix:\n";
    PrintMatrix(Matrix,3,3);
    cout<<"\nMinimun Number is : "<<CheckMinNuberInMatrix(Matrix,3,3);
    cout<<"\nMax Number is : "<<CheckMaxNuberInMatrix(Matrix,3,3);

}
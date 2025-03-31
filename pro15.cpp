#include<iostream>
#include <iomanip>
using namespace std;
short ReadPositiveNumber(string msg)
{
    int Num;
    do{
        cout<<msg;
        cin>>Num;
    }while(Num < 0);
    return Num;
}
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
    int Matrix[3][3] = {{5,8,9},{7,8,8},{11,8,3}};
    cout<<"\nMatrix1:\n";
    PrintMatrix(Matrix,3,3);
    int Num = ReadPositiveNumber("\nEnter a positive number : ");
    cout<<"\nNumber "<<Num<<" count in matrix is "<<CouterOfMatrix(Matrix,3,3,Num);

}
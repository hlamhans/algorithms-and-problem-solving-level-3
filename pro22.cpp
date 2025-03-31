#include <iostream>
using namespace std;

void PrintFibo(int Num, int Pev1, int Pev2)
{
	int FebNum = 0;
	if(Num > 0)
	{
		FebNum = Pev1 + Pev2;
		Pev1 = Pev2;
		Pev2 = FebNum;
		cout<<FebNum<<" ";
		PrintFibo(Num - 1, Pev1, Pev2);
	}
	
}
int main()
{
	PrintFibo(10, 0 ,1);
}

#include <iostream>
using namespace std;

void	PrintFibonacciUsingLoop(short number)
{
	int febNum = 0;
	int prev1 = 0 , prev2 = 1;
	cout<<"1 ";
	for(int i = 0; i <= number; i++)
	{
		febNum = prev1 + prev2;
		cout<<febNum<<" ";
		prev1 = prev2;
		prev2 = febNum;
	}
}

int main()
{
	PrintFibonacciUsingLoop(10);

}

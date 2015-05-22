// program to illustrate function prototyping

#include <iostream>
using namespace std;

int maxInt(int a, int b);

int main()
{
	cout << maxInt(88, 102) << endl;

	return 0;
}

int maxInt(int a, int b)
{
	if (a >= b)
		{ return a; }
	else
		{ return b; }
}

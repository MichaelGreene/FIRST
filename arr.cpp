// program to go over arrays

#include <iostream>
using namespace std;

int sumarray(const int myarray[], const int SIZE);

int main()
{
	const int SIZE(10); // array size
	int myarray[SIZE];
	char myarr2[3] = {'1', '3', '5'};
	string myarr3[] = {"Hi", "world"};

	cout << "Enter list of " << SIZE << " values: ";
	for (int i = 0; i < SIZE; i++ )
	{
		cin >> myarray[i];
	}

	int sumarray(const int myarray[], const int SIZE);
}

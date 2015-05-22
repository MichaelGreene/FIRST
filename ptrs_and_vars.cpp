// Examples of logical operators

#include <iostream>
using namespace std;

int main()
{
	int x(5);
	int y(25);

	if (x < 5 && y < 10) { cout << "true" << endl; }
	else { cout << "false" << endl; };

	if (x < 5 || y < 10) { cout << "true" << endl; }
	else { cout << "false" << endl; };

	if (x < 5 && !(y < 10)) { cout << "true" << endl; }
	else { cout << "false" << endl; };

	return 0;
}


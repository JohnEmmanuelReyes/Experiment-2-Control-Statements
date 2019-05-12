#include<iostream>
using namespace std;

int main()
{

	int x,y,z;
	cout << " This program calculates the sum of all whole numbers starting from 1 up to a given number" << endl;
	do
	{
		cout << "Enter a number\t";
		cout << "X:"; cin >> x;
		z = 0;
		for (y = 1; y <= x; ++y)
		{
			
			z += y;
		}
		cout << "The sum of all whole numbers from 1 to \t" << x << "= \t" << z << "\n"<< endl;
	}while (x > 0);

	system("pause");
	return 0;
}
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{

	cout << " Insert two integers to get the value of V" << endl;
	int P;
	float X, Y;
	const double Z = 2.50;
	float V;
	cout << "X :"; cin >> P;
	cout << "Y :"; cin >> Y;

	switch (P)
	{
	case 1:
	{
		X = 1;
		if (Y > 1 && Y < 5)
		{
			V = X * Y*Z;
			cout << "The Value of V is : " << setprecision(2) << setw(10) << fixed << V << endl;
		}
		else if (Y >= 5)
		{
			V = X + (Y / Z);
			cout << "The Value of V is : " << setprecision(2) << setw(10) << fixed << V << endl;

		}
	}
		break;
	case 2:
		{
		X = 2;
		if (Y <= 5)
		{
			V = abs((X - Y) / Z);
			cout << "The Value of V is : \n "  << setprecision(2) << setw(10) << fixed << V << endl;

		}

		else if (Y > 5)
		{
			V = X - sqrt(Y + Z);
			cout << "The Value of V is :" << setprecision(2) << setw(10) << fixed << V << endl;

		}

		}
		break;
	default:
		{
		X = P;
		V = X + Y + Z;
		cout << "The Value of V is :" << setprecision(2) << setw(10) << fixed << V << endl;
		}
		break;
	}

	system("pause");
	return 0;



}

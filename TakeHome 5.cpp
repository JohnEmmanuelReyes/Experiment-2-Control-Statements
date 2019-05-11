#include<iostream>
using namespace std;

int main()
{
	cout << "Fibonacci Numbers\n" << endl;
	int a, b, c, x;
	a = 0;
	b = 1;
	cout << a << "," << b << ",";
	for (x = 0; x <= 20; x++)
	{
		if (x <=18)
		{
			c = a + b;
			a = b;
			b = c;
			cout << c << ",";
		}

		else if (x == 19)
		{ 
			c = a + b;
			a = b;
			b = c;
			cout << c << "\n" << "\n";
		}
		
	}
	
	system("pause");
	return 0;
}
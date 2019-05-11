#include<iostream>
using namespace std;

int main()
{
	int a;
	for (a = 1; a <= 30;)
	{
		if (a < 30)
			cout << a << ",";
			
		else
			cout << a << "\t" << endl;

		if (a < 10)
				a += 1;
			else
				a += 2;
	}
	system("pause");
	return 0;
}
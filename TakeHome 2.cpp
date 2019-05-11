#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << " Customer's Monthly Bill " << endl;
	float bill, gallons, P, unpaid;

	cout << " How many gallons used recently and previous month: \t "; cin >> gallons;
	cout << " How much is the unpaid balance "; cin >> unpaid; 
	P = gallons * 1.10;


	if (unpaid > 0)
	{
		cout << " Unpaid balance is: \n" << unpaid << " Additional P20 is added on the bill" << endl;
		bill = P + 35 + 20;
	}
	else
	{
		cout << " No unpaid balance, no additional payment is added." << endl;
		bill = P + 35;
	}

	
	cout << " Additional P35 water demand charge added\n " << endl;
	cout << "\n" << endl;
	cout << " Your Total Bill is:" << bill << endl; 




	
	


	system("pause");
	return 0;
}

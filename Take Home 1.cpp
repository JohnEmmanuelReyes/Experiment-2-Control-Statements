#include<iostream>
using namespace std;

int main()
{
	cout << " Choose the package you're subscribed to\n" <<
		" Package A: P995/mo - 10 hours access, additional P20 per hour \n" <<
		" Package B: P1495/mo - 20 hours access, additional P10 per hour \n" <<
		" Package C: P1995/mo of unlmited access is provided\n" << endl;

	char package; 
	int time, Bill;

	cin >> package;

	switch(package)
	{
		case 'a':
		case 'A': 
			cout << " Package A" << endl; 
			cout << " How many hours did you used? \t"; 
			cin >> time;
			cout << "\n" << "\n" << endl;
			if (time <= 10)
			{
				cout << " Your monthly bill is :\t" << "P995" << endl;
			}
			else if (time <= 744)
			{
				cout << "Additional P20 per hour was added" << endl;
				Bill = (time - 10) * 20 + 995;
				cout << "Your monthly bill is :\t" << Bill << endl;
			}
			else
				cout << "Invalid Input of hours" << endl;


			break; 


		case 'b':
		case 'B':
			cout << " Package B" << endl;
			cout << " How many hours did you used? \t"; 
			cin >> time;
			cout << "\n" << "\n" << endl;
			if (time <= 20)
			{
				cout << " Your monthly bill is :\t" << "P1495" << endl;
			}
			else if (time <= 744)
			{
				cout << "Additional P20 per hour was added" << endl;
				Bill = (time - 20) * 10 + 1495;
				cout << "Your monthly bill is :\t" << Bill << endl;
			}
			else
				cout << "Invalid Input of hours" << endl;

			break;

		case 'c':
		case 'C':
			cout << " Package C" << endl;
			cout << " Your monthly bill is :\t" << "P1995" << endl;
	
			break;
	}

	system("pause");
	return 0;

}  


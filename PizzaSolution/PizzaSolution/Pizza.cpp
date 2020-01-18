//written by Ryley Danielson

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	// variables

	double totalItems;
	double priceM = 9.99;
	double priceL = 12.99;
	double totalPrice = 0;
	string customerName;
	char cupon;
	char size;


	//input
	cout << setprecision(2) << fixed;
	cout << "M(edium) or L(arge) pizza? ";
	cin >> size;
	size = toupper(size);

		if (size == 'M' || size == 'L')
		{
			if (size == 'M')
			{

				cout << "The price of a medium pizza is: $" << priceM << endl;
				totalPrice = priceM;
			}
			else
			{
				cout << "The price of a large pizza is: $" << priceL << endl;
				totalPrice = priceL;
			}

			cout << "\nDo you have a coupon (Y/N): ";
			cin >> cupon;
			cupon = toupper(cupon);

			if (cupon == 'Y')
			{
				totalPrice = totalPrice - 2.00;
			}
		}
		else
		{
			cout << "You must enter an 'M' or an 'L'" << endl;
			cout << "\nPress ENTER to continue...";

			cin.get();
			cin.get();

			return 0;
		}

	
	cout << "\nFinal cost: $" << totalPrice << endl;
	cout << "\n\nPress ENTER to continue...";

	cin.get();
	cin.get();

	return 0;
}


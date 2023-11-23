#include < iostream >
using namespace std;
int main()
{
	float price, tax, discount, pricet, tax1, totalprice, price1;
	int quantity;
	char choice;
	do
	{
		cout << " Enter the price of the product : ";
		cin >> price;
		cout << " Enter the quantity of the product :";
		cin >> quantity;
		cout << " Enter the tax rate : ";
		cin >> tax;
		pricet = price * quantity;
		tax1 = tax * quantity;
		price1 = tax1 + pricet;
		if (quantity >= 10)
		{
			discount = price1 * 0.1;
			totalprice = price1 - discount;
			cout << " The total price is " << totalprice;
		}
		else
		{
			cout << " The total price is " << price1;

		}
		cout << " \n Do you want to calculate more ?(y/n) \n";

		cout << " Enter your choice :";
		cin >> choice;
	} while (choice == 'y');

	


}

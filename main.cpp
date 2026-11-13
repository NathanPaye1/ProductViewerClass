#include "product.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void showProducts(const vector<Product>& products)
{
	cout << "=====Products=====\n\n";
	int num = 0;
	for(Product p : products)
	{
		num++;
		cout << num << " - " << p.name << endl;
	}
	cout << endl;
}

void showProduct(const Product& p)
{
	cout << "=====Product=Data=====\n\n" <<
		"Name: " << p.name << endl <<
		"Price: " << p.getPrice() << endl <<
		"Discount Percent: " << p.getDiscountPercent() << endl <<
		"Discount Amount: " << p.getDiscountAmount() << endl <<
		"Discount Price: " << p.getDiscountPrice() << "\n\n";
}

int main()
{
	cout << "=====Product=Viewer=====\n";

	vector<Product> products;

	products.push_back(Product("Hammer", 5.99, 5));
	products.push_back(Product("Needle Nose Pliers", 6.99, 10));
	products.push_back(Product("Cordless Drill", 65.95));

	showProducts(products);

	char choice = 'y';
	while(choice =='y')
	{
		int num;
		cout << "Enter Product Number to View: ";
		cin >> num;
		if(num > 0 && num <= products.size())
		{
			Product p = products[num - 1];
			showProduct(p);
		}
		else
		{
			cout << "There is no product with that number\n\n";
		}

		cout << "Do you want to view another product? (y/n): ";
		cin >> choice;
	}
	cout << "Ciao\n\n";

	return 0;
}

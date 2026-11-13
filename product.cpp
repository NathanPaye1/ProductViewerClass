#include <string>
#include <cmath>
#include <stdexcept>
#include "product.h"

using namespace std;


Product::Product(string name, double price, int discountPercent)
{
	this->name = name;
	setPrice(price);
	setDiscountPercent(discountPercent);
}

void Product::setPrice(double pPrice)
{
	if(pPrice >= 0.0)
	{
		price = round(pPrice * 100) / 100; // round to two places
	}
	else
	{
		throw invalid_argument("Price cannot be negative");
	}
}

void Product::setDiscountPercent(int pDiscPerc)
{
	if(pDiscPerc >= 0 && pDiscPerc < 100)
	{
		discountPct = pDiscPerc;
	}
	else
	{
		throw invalid_argument("Discount Percent must be between 0 and 100");
	}
}

double Product::getDiscountAmount() const
{
	double discAmount = price * discountPct / 100;
	return round(discAmount * 100) / 100;
}
double Product::getDiscountPrice() const
{
	double discPrice = price - getDiscountAmount();
	return round(discPrice * 100) / 100;
}

#pragma once
#ifndef PAYE_PRODUCT_H
#define PAYE_PRODUCT_H

#include <string>

class Product
{
	private:
		double price;
		int discountPct;
	public:
		std::string name;

		Product(std::string name = "", double price = 0.0, int discountPercent = 0);

		double getPrice() const {return price;};
		void setPrice(double);

		int getDiscountPercent() const {return discountPct;};
		void setDiscountPercent(int);

		double getDiscountAmount() const;
		double getDiscountPrice() const;
};


#endif

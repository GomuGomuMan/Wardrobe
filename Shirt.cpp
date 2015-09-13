#include "Shirt.h"

// Default Constructor
Shirt::Shirt()
{
	type = "";
	brand = "";
	size = 0;
	price = 0;
}

// Overloaded Constructor
Shirt::Shirt(string type, string brand, double size, double price)
{
	this->type = type;
	this->brand = brand;
	this->size = size;
	this->price = price;
}

// Return type
string Shirt::getType() const
{
	return type;
}

// Return brand
string Shirt::getBrand() const
{
	return brand;
}

// Return size
double Shirt::getSize() const
{
	return size;
}

// Return price
double Shirt::getPrice() const
{
	return price;
}

// Print
void Shirt::print() const
{
	cout << "Size: " << getSize() << endl;
}
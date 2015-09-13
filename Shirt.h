#pragma once
#ifndef SHIRT_H
#define SHIRT_H

#include <string>
#include <iostream>

using namespace std;

class Shirt
{
public:
	// Default Constructor
	Shirt();

	// Overloaded Constructor
	Shirt(string type, string brand, double size, double price);

	// Return type
	string getType() const;

	// Return brand
	string getBrand() const;

	// Return size
	double getSize() const;

	// Return price
	double getPrice() const;

	// Print
	void print() const;

private:
	string type;
	string brand;
	double size;
	double price;

};

#endif
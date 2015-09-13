#include "Profile.h"

// Default Constructor
Profile::Profile()
{

}

// Overloaded Constructor
Profile::Profile(string name, string email, string cellphone, string birthday, string address, string city,
	int zip_code, string country)
{
	this->name = name;
	this->email = email;
	this->cellphone = cellphone;
	this->birthday = birthday;
	this->address = address;
	this->city = city;
	this->zip_code = zip_code;
	this->country = country;
}

// getName()
string Profile::getName() const
{
	return name;
}


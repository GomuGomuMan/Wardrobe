#pragma once
#ifndef PROFILE_H
#define PROFILE_H

#include <string>

using namespace std;

class Profile
{
public:
	// Default Constructor
	Profile();

	// Overloaded Constructor
	Profile(string name, string email, string cellphone, string birthday, string address, string city,
		int zip_code, string country);

	// getName()
	string getName() const;

private:
	string name;
	string email;
	string cellphone;
	string birthday;
	string address;
	string city;
	int zip_code;
	string country;
};

#endif
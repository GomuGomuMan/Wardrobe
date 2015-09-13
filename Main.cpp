#include <iostream>
#include <string>

#include <fstream>

#include "Shirt.h"
#include "Profile.h"

using namespace std;

Shirt createNewShirt();

Profile createProfile();

int main()
{
	// Title
	cout << "Welcome to My Wardrobe!" << endl;
	cout << endl;

	// Profile
	cout << "Do you want to create a profile?(y/n) ";

	char choice;
	cin >> choice;
	if (choice == 'y')
	{
		Profile profile = createProfile();
		ofstream ofs("profile.ros", ios::binary);
		ofs.write((char *)&profile, sizeof(profile));
		ofs.close();
	}
	
	// Test
	Profile pro;
	ifstream ifs("profile.ros", ios::binary);
	//ifs.read((char *)&pro, sizeof(pro)); // Problem
	ifs.seekg(0, ifs.end);
	int length = ifs.tellg();
	ifs.seekg(0, ifs.beg);

	if (length != sizeof(pro))
	{
		cout << "Off";
	}

	char * buffer = new char[length];

	ifs.read(buffer, length);
	memcpy(&pro, buffer, length);
	

	system("Pause");
	return 0;
}

Shirt createNewShirt()
{
	cout << "Enter type: ";
	string type;
	cin >> type;

	cout << "Enter your brand: ";
	string brand;
	cin >> brand;

	cout << "Enter your size: ";
	double size;
	cin >> size;

	cout << "Enter price: ";
	double price;
	cin >> price;

	Shirt t_shirt(type, brand, size, price);
	return t_shirt;
}

Profile createProfile()
{
	Profile profile = Profile("Duy Nguyen", "duybn@uci.edu", "(714) 510-1262", "11/02/1993", "13168 Jefferson St", "Garden Grove",
		92844, "U.S");
	return profile;
}
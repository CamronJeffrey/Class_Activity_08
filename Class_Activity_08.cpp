#include <iostream>
#include <string>

using namespace std;


struct Address
{
	string street;
	string city;
	string zipCode;
};

struct Customer
{
	string name;
	Address address;
};

void printCustomer(Customer customer)
{
	cout << "Name: " << customer.name << endl;
	cout << "Street: " << customer.address.street << endl;
	cout << "City: " << customer.address.city << endl;
	cout << "Zip Code: " << customer.address.zipCode << endl;
}

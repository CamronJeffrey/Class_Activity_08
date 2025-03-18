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

void printCustomer(Customer customer);

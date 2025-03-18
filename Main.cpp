#include <iostream>
#include <string> 

using namespace std;

int main(){
	Customer customer;
	cout << "Enter the name of the customer: ";
	getline(cin, customer.name);
	cout << "Enter the street of the customer: ";
	getline(cin, customer.address.street);
	cout << "Enter the city of the customer: ";
	getline(cin, customer.address.city);
	cout << "Enter the zip code of the customer: ";
	getline(cin, customer.address.zipCode);
	printCustomer(customer);
	return 0;
}

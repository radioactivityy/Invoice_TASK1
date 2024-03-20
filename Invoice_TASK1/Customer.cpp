#include <string>
#include "Customer.h"
using namespace std;

Customer::Customer(const std::string name, const std::string streetno,
	const std::string city, const std::string country)
{
	this->name = name;
	this->streetNo = streetno;
	this->city = city;
	this->country = country;


};

Customer::~Customer()

{


};

std::string Customer::toString()
{
	return name + "\n" + streetNo + "\n" + city + "\n" + country;

};


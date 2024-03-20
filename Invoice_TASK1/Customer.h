#pragma once

#include <string>

using namespace std;

class Customer {
private:
	std::string name;
	std::string city;
	std::string streetNo;
	std::string country;

public:
	Customer(const std::string name, const std::string streetno,
		const std::string city, const std::string country);
	~Customer();

	std::string toString();
};



#pragma once
#include <string>
using namespace std;

class InvoiceItem {
private:
	int itemNo;
	std::string description;
	double quantity;
	double rate;

public:
	InvoiceItem(int itemNo, std::string description, double quantity, double rate);
	~InvoiceItem();

	std::string toString();

	double getAmount();
};
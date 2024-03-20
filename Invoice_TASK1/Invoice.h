#pragma once
using namespace std;
#include <string>
#include "Customer.h"
#include "Invoiceltem.h"

class Invoice {
private:
	std::string invoiceNumber;
	std::string invoiceDate;
	std::string suplierName;
	std::string suplierAddress;
	Customer* customer;
	InvoiceItem** items = nullptr;
	int counter = 0;

public:
	Invoice(std::string invoiceNumber, std::string invoiceDate,
		std::string suplierName, std::string suplierAdress, Customer* customer);
	~Invoice();

	std::string toString();
	void AddInvoiceItem(int itemNo, std::string description, double quantity, double rate);
	double GetTotal();

};

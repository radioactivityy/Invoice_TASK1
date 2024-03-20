#include "Invoice.h"


Invoice::Invoice(std::string invoiceNumber, std::string invoiceDate,
	std::string suplierName, std::string suplierAddress, Customer* customer)
{
	this->items = new InvoiceItem * [20] {nullptr, };
	this->counter = 0;
	this->invoiceNumber = invoiceNumber;
	this->invoiceDate = invoiceDate;
	this->suplierName = suplierName;
	this->suplierAddress = suplierAddress;
	this->customer = customer;
}


Invoice::~Invoice()
{
	for (int i = 0; i < 20; i++)
	{
		if (items[i] != nullptr)
		{
			delete items[i];
		}
	}
}

std::string Invoice::toString()
{
	std::string result = "Invoice Number: " + this->invoiceNumber + "\n" +
		"Invoice Date " + this->invoiceDate + "\n" +
		"Suplier Name " + this->suplierName + "\n" +
		"Suplier Address " + this->suplierAddress + "\n" +
		"Customer" + this->customer->toString() + "\n" +
		"Item No\tDescription\tQuantity\tRate\tAmount\n";
	for (int i = 0; i < 20; i++)
	{
		if (items[i] != nullptr)
		{
			result += (this->items[i])->toString() + "\n";
		}
	}

	return result;
}

void Invoice::AddInvoiceItem(int itemNo, std::string description,
	double quantity, double rate)

{
	InvoiceItem* item = new InvoiceItem(itemNo, description, quantity, rate);
	this->items[this->counter] = item;
	this->counter++;
}
double Invoice::GetTotal()
{
	double total = 0;
	for (int i = 0; i < 20; i++)
	{
		if (items[i] != nullptr) {
			total += this->items[i]->getAmount();
		}
		return total;
	}

}



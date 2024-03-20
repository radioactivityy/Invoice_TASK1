#include "Invoiceltem.h"

InvoiceItem::InvoiceItem(int itemNo, std::string description, double quantity, double rate)

{
	this->itemNo = itemNo;
	this->description = description;
	this->quantity = quantity;
	this->rate = rate;

}

InvoiceItem::~InvoiceItem()
{

}

std::string InvoiceItem::toString()
{
	return std::to_string(this->itemNo) + "\t" +
		this->description + "\t" +
		std::to_string(this->quantity) + "\t" +
		std::to_string(this->rate) + "\t" +
		std::to_string(this->getAmount());
}

double InvoiceItem::getAmount()
{
	return this->quantity * this->rate;

}
// Invoice_Task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Customer.h"
#include "Invoice.h"

int main()
{
    std::cout << "Invoice System test \n\n";

    Customer* cust1 = new Customer("John Doe", "123 MainSt", "Anytown", "USA");
    std::cout << cust1->toString() << std::endl << std::endl;
    Invoice* inv1 = new Invoice("123", "2021-01-01", "ABC Inc", "456 Elm St", cust1);
    inv1->AddInvoiceItem(1, "Hammer", 2, 10.00);
    inv1->AddInvoiceItem(2, "Nails", 100, 0.10);
    inv1->AddInvoiceItem(1, "Saw", 1, 20.00);
    std::cout << inv1->toString() << std::endl << std::endl;

    std::cout << "Total Invoice price: " << inv1->GetTotal() << std::endl;

    delete cust1;
    cust1 = nullptr;
    delete inv1;
    inv1 = nullptr;

    return 0;

}

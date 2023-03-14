#include "Task2Class.h"

#include <iostream>
#include <string>

using namespace std;

Task2Class::Task2Class(int sku, string desc, double money, string uom, int quant=0, double lead){

	SKU = sku;
	Description = desc;
	Price = money;
	UOM = uom;
	QuantityOnHand = quant;
	LeadTime = lead;

}
Task2Class::~Task2Class(){}
string Task2Class::GetPartInfo() { return SKU+Description; }
double Task2Class::GetPrice() { return Price; }
bool Task2Class::InStock() { return (QuantityOnHand>0); }
bool Task2Class::Available() { return true; }

bool Task2Class::operator >(Task2Class& const other) { return true; }
bool Task2Class::operator <(Task2Class& const other) { return true; }
bool Task2Class::operator ==(Task2Class& const other) { return true; }

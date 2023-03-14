#include "Task2Class.h"

#include <iostream>
#include <string.h>

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
string Task2Class::GetPartInfo() {
	string returnstring = "SKU: " + to_string(SKU) + "\n Description : "+ Description;
	return returnstring;
}
double Task2Class::GetPrice() { return Price; }
bool Task2Class::InStock() { return (QuantityOnHand>0); }
bool Task2Class::Available() { return (QuantityOnHand > 0)||(currentdate>Leadtime); }

bool Task2Class::operator >(Task2Class& const other) { 
	if (SKU > other.SKU)
		return true;
	else
		return false;
}
bool Task2Class::operator <(Task2Class& const other) { 
	if (SKU < other.SKU)
		return true;
	else
		return false;
}
bool Task2Class::operator ==(Task2Class& const other) {
	if (SKU == other.SKU)
		return true;
	else
		return false;
}

#pragma once
#ifndef TASK2CLASS_H
#define TASK2CLASS_H
#include <string.h>

class Task2Class
{
public:

Task2Class(int sku, string desc, double money, string uom, int quant, double lead);
~Task2Class();
string GetPartInfo(); //should be string but string isnt working
double GetPrice();
bool InStock();
bool Available();

bool operator >(Task2Class& const other);
bool operator <(Task2Class& const other);
bool operator ==(Task2Class& const other);


private:
	int SKU;
	string Description; //change back to string
	double Price;
	string UOM; //unit of measure
	int QuantityOnHand;
	double LeadTime;

};
#endif
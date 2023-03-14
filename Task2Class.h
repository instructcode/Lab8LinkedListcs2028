#pragma once
#include <string>
#include <string.h>
#ifndef TASK2CLASS_H
#define TASK2CLASS_H


class Task2Class
{
public:

Task2Class(int sku, string desc, double money, string uom, int quant, double lead);
~Task2Class();
string GetPartInfo(); 
double GetPrice();
bool InStock();
bool Available();

bool operator >(Task2Class& const other);
bool operator <(Task2Class& const other);
bool operator ==(Task2Class& const other);


private:
	int SKU;
	string Description; 
	double Price;
	string UOM; 
	int QuantityOnHand;
	double LeadTime;

};
#endif
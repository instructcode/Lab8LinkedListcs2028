#pragma once
#include <string>
#include <string.h>
#include <ctime>
#include <chrono>
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

using namespace std;

class InventoryItem
{
public:

InventoryItem(int sku, string desc, double money, string uom, double lead, int quant);
~InventoryItem();
string GetPartInfo(); 
double GetPrice();
bool InStock();
bool Available();

bool operator >(InventoryItem& const other);
bool operator <(InventoryItem& const other);
bool operator ==(InventoryItem& const other);


private:
	int SKU;
	string Description; 
	double Price;
	string UOM; 
	int QuantityOnHand;
	double LeadTime;

};
#endif
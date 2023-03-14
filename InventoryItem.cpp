#include "InventoryItem.h"

#include <iostream>
#include <string>

using namespace std;

InventoryItem::InventoryItem(int sku, string desc, double money, string uom,double lead, int quant = 0){

	SKU = sku;
	Description = desc;
	Price = money;
	UOM = uom;
	QuantityOnHand = quant;
	LeadTime = lead;

}
InventoryItem::~InventoryItem(){}
string InventoryItem::GetPartInfo() {
	string returnstring = "SKU: " + to_string(SKU) + "\n Description : "+ Description;
	return returnstring;
}
double InventoryItem::GetPrice() { return Price; }
bool InventoryItem::InStock() { return (QuantityOnHand>0); }
bool InventoryItem::Available() { return (QuantityOnHand > 0)/* || (currentdate>Leadtime)*/; }
//*********************************************************** this needs fixed above
bool InventoryItem::operator >(InventoryItem& const other) {
	if (SKU > other.SKU)
		return true;
	else
		return false;
}
bool InventoryItem::operator <(InventoryItem& const other) {
	if (SKU < other.SKU)
		return true;
	else
		return false;
}
bool InventoryItem::operator ==(InventoryItem& const other) {
	if (SKU == other.SKU)
		return true;
	else
		return false;
}

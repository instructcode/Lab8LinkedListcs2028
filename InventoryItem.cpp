#include "InventoryItem.h"

#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

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
bool InventoryItem::Available(int date) { 
	// Get the current time point
	auto now = std::chrono::system_clock::now();

	// Convert the time point to a time_t object
	std::time_t time = std::chrono::system_clock::to_time_t(now);

	// Convert the time_t object to a string in the format "YYYY-MM-DD"
	char date[11];
	//std::strftime(date, sizeof(date), "%Y-%m-%d", std::localtime(&time));

	return (QuantityOnHand > 0)/* || (currentdate>Leadtime)*/; }
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

#include "Task2Class.h"

#include <iostream>
#include <string>

using namespace std;

Task2Class::Task2Class(){}
Task2Class::~Task2Class(){}
char Task2Class::GetPartInfo() { return 'o'; }
double Task2Class::GetPrice() { return 0; }
bool Task2Class::InStock() { return true; }
bool Task2Class::Available() { return true; }

bool Task2Class::operator >(Task2Class& const other) { return true; }
bool Task2Class::operator <(Task2Class& const other) { return true; }
bool Task2Class::operator ==(Task2Class& const other) { return true; }

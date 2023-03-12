#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Node.h"
#include "Node.cpp"

using namespace std;



int main() {
	//commented code tests parts of the code as I go
	/**/
	/**/
	/**/
	/**/

	LinkedList<int>* list = new LinkedList<int>();
	list->AddItem(new int(7));
	list->AddItem(new int(2));
	list->AddItem(new int(3));
	for (size_t i = 100; i > 0; i--)
	{
		list->AddItem(new int(i*6));
	}
	list->Display();
	bool yes;
	yes = list->Transverse(new int(594), list->head);
	cout << yes << endl;
	list->NotYetMergeSort();
	list->Display();


	return 0;
}
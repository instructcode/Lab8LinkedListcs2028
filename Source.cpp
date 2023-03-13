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
	/*   CODE MOSTLY WORKS BUT FAILS WHEN YAH START MANIPULATING THINGS AT THE START OR END OF THE LIST */
	/**/
	//
	//TODO:
	//1.implement REMOVE ITEM FOR SINGLE NODE LIST  (WHERE SWAP HAPPENS) in GETITEM
	//2. RESET
	//3.  FINISH SEENExt/PREV/AT functions
	//

	LinkedList<int>* list = new LinkedList<int>();
	Node<int>* temp;
	bool BUGSFIXED = true;


	list->AddItem(new int(7));
	list->Display();
	if (BUGSFIXED) {
		temp = list->GetItem(new int(7), list->head);
		cout << " Temp = " << *temp->data << endl;
		delete temp;
		temp = nullptr;
		list->Display();
	}

	list->AddItem(new int(7));
	list->AddItem(new int(2));
	list->AddItem(new int(3));
	for (size_t i = 100; i > 80; i--)
	{
		list->AddItem(new int(i * 6));
	}
	list->Display();


	bool yes;
	yes = list->Transverse(new int(594), list->head);
	cout << yes << endl;
	list->NotYetMergeSort();
	list->Display();

	//int* temp2;
	temp = list->GetItem(new int(486), list->head);
	cout << " Temp = " << *temp->data << endl;
	delete temp;
	temp = nullptr;
	list->Display();

	if (BUGSFIXED) {
	temp = list->GetItem(new int(2), list->head);
	cout << " Temp = " << *temp->data << endl;
	delete temp;
	temp = nullptr;
	list->Display();
}
	if (BUGSFIXED) {
		temp = list->GetItem(new int(600), list->head);
		cout << " Temp = " << *temp->data << endl;
		delete temp;
		temp = nullptr;
		list->Display();
	}
	//temp2 = list->SeeNext(new int(504), list->head);
	//cout << " Temp = " << *temp2->data << endl;
	list->Display();
	temp = list -> SeeAt(new int(504), list->head);
	cout << " Temp = " << *temp->data << endl;
	list->Display();
	list->Display();

	return 0;
}
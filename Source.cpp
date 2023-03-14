#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Node.h"
#include "Node.cpp"
#include "Task2Class.h"
#include "Task2Class.cpp"
#include <string>

using namespace std;



int main() {
	//commented code tests parts of the code as I go
	/**/
	/**/
	/*    */
	/**/
	//
	//TODO:
	//1. 
	//2. RESET   use it
	//3.  MAKE SURE WHEN SEENEXT and functions thats can transverse past the end of the list
	// behave properly when such things happen
	//

	LinkedList<int>* list = new LinkedList<int>();
	Node<int>* temp;
	bool BUGSFIXED = true;


	list->AddItem(new int(7));
	list->Display();
	if (BUGSFIXED) {
		temp = list->GetItem(new int(7), list->head);
		cout << " Temp = " << *temp->data << endl;
		delete temp->data;
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
	delete temp->data;
	delete temp;
	temp = nullptr;
	list->Display();

	if (BUGSFIXED) {
	temp = list->GetItem(new int(2), list->head);
	cout << " Temp = " << *temp->data << endl;
	delete temp->data;
	delete temp;
	temp = nullptr;
	list->Display();
}
	if (BUGSFIXED) {
		temp = list->GetItem(new int(600), list->head);
		cout << " Temp = " << *temp->data << endl;
		delete temp->data;
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
	int* temp3;
	temp3 = list->SeeNext();
	cout << " Temp = " << *temp3 << endl;
	temp3 = list->SeeNext();
	cout << " Temp = " << *temp3 << endl;
	temp3 = list->SeePrev();
	cout << " Temp = " << *temp3 << endl;
	list->Display();

	/*
	int userresponse;
	do{
	do {

		cout << "This is a test of the LinkedList class." << endl;
		cout << "Type 1 for: LinkedList();" << endl;
			cout << "Type 2 for: ~LinkedList();" << endl;
			cout << "Type 3 for: void AddItem(T * item);" << endl;
			cout << "Type 4 for: Node<T>* GetItem(T * item, Node<T>*ptr);" << endl;
			cout << "Type 5 for: bool IsInList(T * item);" << endl;
			cout << "Type 6 for: bool IsEmpty();" << endl;
			cout << "Type 7 for: int Size();" << endl;
			cout << "Type 8 for: T* SeeNext();" << endl;
			cout << "Type 9 for: T* SeePrev();" << endl;
			cout << "Type 10 for: Node<T>* SeeAt(T*, Node<T>*ptr);" << endl;
			cout << "Type 11 for: void Reset();" << endl;
			cout << "Type 12 for: void NotYetMergeSort();" << endl;
			cout << "Type 13 for: void Display();" << endl;
			cout << "Type 99 to terminate program"; << endl;
			getline(cin, userresponse);
			//cin>>userresponsel
			//cin.ignore()

	} while (userresponse>13||userresponse <1);

	switch (userresponse) {
	case 1:
		cout<< "Creating empty list..." <<endl;
		LinkedList<int>* list = new LinkedList<int>();
	case 2:
		cout<< "Deleting list..." <<endl;
		//Gotta delete all ints* in the list too
		//nodes too???
		delete list;
	case 3:
		cout << "To add an item please enter the values of the inventory item:"  <<endl;
		cout << "integer SKU: ";
		int SKU;
		getline(cin, SKU);
		cout << "Quantity: ";
		int quantity;
		cin >> quantity;
		cin.ignore();
		cout << "Price: ";
		double price;
		cin >> price;
		cin.ignore();
		cout << "Unit of Measure: ";
		string uom;
		getline(cin, uom);
		cout << "Lead Time: ";
		double lead;
		cin >> lead;
		cin.ignore();
		cout << "Description: ";
		string desc;
		getline(cin, desc);
		Task2Class* item = new Task2Class(SKU, desc, price, uom, quantity, lead);
		cout << "Adding item to list..." << endl;
		AddItem(item);
	case 4:
		Node<T>* GetItem(T * item, Node<T>*ptr);
	case 5:
		bool IsInList(T * item);
	case 6:
		bool IsEmpty();
	case 7:
		int Size();
	case 8:
		T* SeeNext();
	case 9:
		T* SeePrev();
	case 10:
		Node<T>* SeeAt(T*, Node<T>*ptr);
	case 11:
		void Reset();
	case 12:
		void NotYetMergeSort();
	case 13:
		void Display();

		}while (userresponse!=99);

	}*/


	return 0;
}
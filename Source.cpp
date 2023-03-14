#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Node.h"
#include "Node.cpp"
#include "InventoryItem.h"
#include <ctime>
#include <chrono>
//#include "InventoryItem.cpp"
#include <string>


//ohhhhhh only include the .cpp when its a templated class


using namespace std;



int main() {
	//commented code tests parts of the code as I go
	/**/
	/**/
	/*    */
	/**/
	//
	//TODO:
	//
	//	1.  To DO: make datetime stuff work in available function, finish task 3 stuff (its commented out at end), make sure everything is compatible, add try and catches, fix issues where linked list is requested in a stackoverflow or underflow circumstances
	// 1.5.   Finish Task3 at bottom, iron out the issues im uncertain about
	//2. RESET   use it
	//3.  MAKE SURE WHEN SEENEXT and functions thats can transverse past the end of the list
	// behave properly when such things happen
	//

	//IT WORKS FINALLLLYYYY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	LinkedList<InventoryItem>* list = new LinkedList<InventoryItem>();
	Node<InventoryItem>* temp = new Node<InventoryItem>(new InventoryItem(576879, "PS5 gaming console", 600, "UOM whatever that is", 5, 20), list->head);
	
	list->AddItem(new InventoryItem(5879, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
	list->AddItem(new InventoryItem(589, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
	list->AddItem(new InventoryItem(5687, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
	list->AddItem(new InventoryItem(4579, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
	list->NotYetMergeSort();
	list->Display();
	/*
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
	*/
	//TASK 3 BELOW
	/*
	int userresponse;
	char userresponse1;
	Node<InventoryItem>* temp;
	*/
	/*
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
			cout << "Type 99 to terminate program" << endl;
			cin >> userresponse;
			cin.ignore();
			//getline(cin, userresponse);

	} while (userresponse>13||userresponse <1);

	switch(userresponse) {
	case 1:
		cout<< "Creating empty list..." <<endl;
		LinkedList<InventoryItem>* list = new LinkedList<InventoryItem>();
		break;
		//****************************************
		//use try catches in all of these to make sure list exists first and is not empty
		//so that the program doesnt crash when it tries to access a nullptr by user being dumbdumb
	case 2:
		cout<< "Deleting list..." <<endl;
		//Gotta delete all ints* in the list too
		//nodes too???
		delete list;
		break;
	case 3:
		cout << "To add an item please enter the values of the inventory item:"  <<endl;
		cout << "integer SKU: "<<endl;
		int SKU;
		cin >> SKU;
		cin.ignore();
		//getline(cin, SKU);
		cout << "Quantity: "<<endl;
		int quantity;
		cin >> quantity;
		cin.ignore();
		cout << "Price: "<<endl;
		double price;
		cin >> price;
		cin.ignore();
		cout << "Unit of Measure: "<<endl;
		string uom;
		getline(cin, uom);
		cout << "Lead Time: "<<endl;
		double lead;
		cin >> lead;
		cin.ignore();
		cout << "Description: "<<endl;
		string desc;
		getline(cin, desc);
		InventoryItem* item = new InventoryItem(SKU, desc, price, uom, lead, quantity);
		cout << "Adding item to list..." << endl;
		list->AddItem(item);
		break;
	case 4:
		cout<<"Type in the SKU of the item you want to get: "<<endl;
		//hmmmmmmmmmmm  T* item = InventoryItem, but how to get the SKU?
		//   Insert for item ____->data->description??
		//its going to have to rely on comparison operators too
		// hmmmm this stumps me
		//should check first to see if available
		//if not available, message this to customer,
		//or just use available() method
		temp = list->GetItem(&SKU, list->head); //(T * item, Node<T>*ptr);
		cout << *temp->data->GetPartInfo() << " Is the item retrieved " <<endl;
		temp->data delete;
		temp->data = nullptr;
		//probably should make destructor handle this stuff automatically
		temp delete;
		temp = nullptr;
		break;
		//add additional code to display the item to the user indicating its in stock
	case 5:
		cout<< "Check to see if an item is in the list." <<endl;
		cout<< "Type in the SKU of the item you want to check: "<<endl;
		bool Isin;
		Isin= list->IsInList(T * item); //replace T * item with proper coding
		if (Isin)
			cout<< "Item is in the list." <<endl;
		else
			cout<< "Item is not in the list." <<endl;
		break;
	case 6:
		cout << "Check to see if the list is empty." <<endl;

		cout << "It is: " << list->IsEmpty() << " that the list is empty." <<endl;
		break;
	case 7:
		cout << "The size of the list is: " << Size() <<endl;
		cout<<  list->Size()<<endl;
		break;
	case 8:
		cout << "See the next item in the list." <<endl;
		temp = list->SeeNext();
		cout << temp->GetPartInfo() <<endl; //this sees a pointer, probably wanna see SKU or description
		break;
	case 9:
		cout << "See the previous item in the list." <<endl;
		temp = list->SeePrev();
		cout << temp->GetPartInfo() <<endl; //this sees a pointers; probably wanna see SKU or description
		break;
	case 10:
		cout << "See the item at a specific location in the list." <<endl;
		cout << "Type in the SKU of the item you want to see: "<<endl;
		cin >> SKU;
		//might have to change function to pay attention to SKU, not pointer
		cout << list->SeeAt(T*, list->head)<<endl; //this sees a pointer, probably wanna see SKU or description
		//also replace T* with some mangled mess of data->getSKU(SKU)
		break;
	case 11:
		cout << "Reset the iterator view of the list to 0" <<endl;
		list->Reset();
		break;
	case 12:
		cout<< "Sort the list by SKU" <<endl;
		cout<< "This should be done whenever u wanna access items after adding items."<<endl;
		//***********************  
		//  OR THIS FUNCTION SHOULD BE CALLED AUTOMATICALLY everytime additems is called
		list->NotYetMergeSort();
		list->Display();
		break;
	case 13:
		cout << "Display the list." <<endl;
		list->Display();
		break;
	case 99:
		cout << "Terminating program." <<endl;
	}<------------ for switch
	cout<< "Clear text? (y/n)" <<endl;
	cin>>userresponse1;
	if(userresponse1=='y')
	system("clr");
		}while (userresponse!=99);

	}
	*/

	return 0;
}
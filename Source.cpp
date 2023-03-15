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

//prototypes
InventoryItem* searchsku2(int SKU, LinkedList<InventoryItem>* lis);
InventoryItem* searchsku(int SKU, InventoryItem* arr[], int numItems);
int indexsku(int SKU, InventoryItem* arr[], int numitems);
void arraysquish(InventoryItem* arr[], int index, int numitems);
void displayskus(LinkedList<InventoryItem>* lis);

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
	//4.Ok all the prework is done.  remainder issues is doing the time for available(), try catches, make sure everything works when stuff goes past the lsit end, it access a nullptr

	//IT WORKS FINALLLLYYYY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	

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
	
	int userresponse;
	char userresponse1;
	int numberitems = 4;
	//*****************************************************
	// // number items only works if stuff gets taken out in order
	//Node<InventoryItem>* temp;
	
	InventoryItem* temp2;
	LinkedList<InventoryItem>* list = new LinkedList<InventoryItem>();
	Node<InventoryItem>* temp = new Node<InventoryItem>(new InventoryItem(576879, "PS5 gaming console", 600, "UOM whatever that is", 5, 20), list->head);
	//^^^^ Don't do node<inventoryItem



	list->AddItem(new InventoryItem(3879, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
		list->AddItem(new InventoryItem(2589, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
		list->AddItem(new InventoryItem(1687, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
		list->AddItem(new InventoryItem(9579, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
		list->AddItem(new InventoryItem(5879, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
			list->AddItem(new InventoryItem(589, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
				list->AddItem(new InventoryItem(5687, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
					list->AddItem(new InventoryItem(4579, "PS5 gaming console", 600, "UOM whatever that is", 5, 20));
		
		/*
	InventoryItem* arrg[30] = { new InventoryItem(5879, "PS5 gaming console", 600, "UOM whatever that is", 5, 20)
	,new InventoryItem(589, "PS5 gaming console", 600, "UOM whatever that is", 5, 20)
	,new InventoryItem(5687, "PS5 gaming console", 600, "UOM whatever that is", 5, 20)
	,new InventoryItem(4579, "PS5 gaming console", 600, "UOM whatever that is", 5, 20) };
	//we only have to manage the array if when we delete these pointers within the linked list
	// the items dont get deleted
	//if they do get deleted then the array is only then necessary to access all the SKU's
	//easily, but there are non-obtrusive ways to access the SKU's, through search the list
	// directly instead of storing them in an array that requires so much management
	//so fragile too.

	for (int i = 0; i < 4; i++) {

		list->AddItem(arrg[i]);
	}
	*/
	list->NotYetMergeSort();
	list->Display();

	Node<InventoryItem>* temp3;
	//temp3 = list->GetItem(searchsku(5879, arrg, numberitems), list->head); //uh oh u see the problem gEttIng an inventory item is only done by pointer
	// but unless u create a inventory pointer to descriptoin table
	//you wont be able to search it
	// sollution is make something that can search by sku or description
	//cout << temp3->data->GetPartInfo() << endl;




	int SKU;
	int arrgindex;
	int quantity;
	double price;
	string uom;
	double lead;
	string desc;


	bool Isin;
	
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
			//cout << "Type 14 for: void displayskus(LinkedList<InventoryItem>* lis)" << endl;
			cout << "Type 99 to terminate program" << endl;
			cin >> userresponse;
			cin.ignore();
			//getline(cin, userresponse);

	} while (userresponse>13||userresponse <1);
	cin.clear();
	switch (userresponse) {
	case 1:
		//cout << "Creating empty list..." << endl;
		//LinkedList<InventoryItem>* list = new LinkedList<InventoryItem>();
		break;
		//****************************************
		//use try catches in all of these to make sure list exists first and is not empty
		//so that the program doesnt crash when it tries to access a nullptr by user being dumbdumb
	case 2:
		cout << "Deleting list..." << endl;
		//Gotta delete all ints* in the list too
		//nodes too???
		delete list;
		break;
	case 3:
		cout << "To add an item please enter the values of the inventory item:" << endl;
		cout << "integer SKU: " << endl;

		cin >> SKU;
		cin.ignore();
		//getline(cin, SKU);
		cout << "Quantity: " << endl;
		cin >> quantity;
		cin.ignore();
		cout << "Price: " << endl;
		cin >> price;
		cin.ignore();
		cout << "Unit of Measure: " << endl;
		getline(cin, uom);
		cout << "Lead Time: " << endl;
		cin >> lead;
		cin.ignore();
		cout << "Description: " << endl;
		getline(cin, desc);
		cout << "Adding item to list..." << endl;
		list->AddItem(new InventoryItem(SKU, desc, price, uom, lead, quantity));
		list->NotYetMergeSort();
		//numberitems++;
		break;
		/*
	case 4:
		cout << "Type in the SKU of the item you want to get: " << endl;
		//hmmmmmmmmmmm  T* item = InventoryItem, but how to get the SKU?
		//   Insert for item ____->data->description??
		//its going to have to rely on comparison operators too
		// hmmmm this stumps me
		//should check first to see if available
		cin >> SKU;
		cin.ignore();
		//if not available, message this to customer,
		//or just use available() method
		arrgindex = indexsku(SKU, arrg, numberitems);
		temp3 = list->GetItem(searchsku(SKU, arrg, numberitems), list->head);
		cout << temp3->data->GetPartInfo() << " Is the item retrieved " << endl;
		delete temp3->data;
		temp->data = nullptr;
		//probably should make destructor handle this stuff automatically
		delete temp3;
		temp3 = nullptr;
		delete arrg[arrgindex];
		arrg[arrgindex]=nullptr;
		arraysquish(arrg, arrgindex, numberitems);
		numberitems--;
		break;
		//add additional code to display the item to the user indicating its in stock
		*/
	case 4:
		cout << "Type in the SKU of the item you want to get: " << endl;
		cin >> SKU;
		cin.ignore();
		//if not available, message this to customer,
		//or just use available() method
		//arrgindex = indexsku(SKU, arrg, numberitems);
		//Node<InventoryItem>* searchsku(int SKU, LinkedList<InventoryItem>*lis)
		temp3 = list->GetItem(searchsku2(SKU, list), list->head);
		cout << temp3->data->GetPartInfo() << " Is the item retrieved " << endl;
		delete temp3->data;
		temp3->data = nullptr;
		//probably should make destructor handle this stuff automatically
		delete temp3;
		temp3 = nullptr;
		//delete arrg[arrgindex];
		//arrg[arrgindex] = nullptr;
		//arraysquish(arrg, arrgindex, numberitems);
		//numberitems--;
		break;
		//add additional code to display the item to the user indicating its in stock
	case 5:
		cout << "Check to see if an item is in the list." << endl;
		cout << "Type in the SKU of the item you want to check: " << endl;
		cin >> SKU;
		cin.ignore();
		Isin = list->IsInList(searchsku2(SKU, list)); //replace T * item with proper coding
		if (Isin) {
			cout << "Item is in the list." << endl;
		}
		else {
		cout << "Item is not in the list." << endl;
	}
		break;
	case 6:
		cout << "Check to see if the list is empty." <<endl;
		cout << "It is: " << list->IsEmpty() << " that the list is empty." <<endl;
		break;
	case 7:
		cout << "The size of the list is: " <<endl;
		cout<<  list->Size()<<endl;
		break;
	case 8:
		cout << "See the next item in the list." <<endl;
		temp2 = list->SeeNext();
		cout << temp2->GetPartInfo() <<endl; //this sees a pointer, probably wanna see SKU or description
		break;
	case 9:
		cout << "See the previous item in the list." <<endl;
		temp2 = list->SeePrev();
		cout << temp2->GetPartInfo() <<endl; //this sees a pointers; probably wanna see SKU or description
		break;
	case 10:
		cout << "See the item at a specific location in the list." <<endl;
		cout << "Type in the SKU of the item you want to see: "<<endl;
		cin >> SKU;
		//might have to change function to pay attention to SKU, not pointer
		temp = list->SeeAt(searchsku2(SKU, list), list->head);
		cout << temp->data <<endl; //this sees a pointer, probably wanna see SKU or description
		//also replace T* with some mangled mess of data->getSKU(SKU)
		//*************************************************************
		//DUNNO WHAT YAH WANT TO SEE , the DATA, pointer, SKU?
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
	//case 14:
	//	cout << "Display all the SKUS in the list." << endl;
	//	displayskus(list);
	//	break;
	case 99:
		cout << "Terminating program." <<endl;
	}
	cout<< "Clear text? (y/n)" <<endl;
	cin>>userresponse1;
	if(userresponse1=='y')
	system("CLS");
		}while (userresponse!=99);

	
	

	return 0;
}






InventoryItem* searchsku2(int SKU, LinkedList<InventoryItem>* lis) {
	Node<InventoryItem>* tempo = lis->head;
	int suk;
	while (tempo!=nullptr) {
		suk = tempo->data->GetSKU();
		if (suk == SKU) {
			return tempo->data;
		}
		tempo=tempo->next;
	}
	return nullptr;

}

InventoryItem* searchsku(int SKU, InventoryItem* arr[], int numitems) {
	for (int i = 0; i < numitems; i++) {
		if (arr[i] != nullptr) {
			if (arr[i]->GetSKU() == SKU)
				return arr[i];
		}
	}
	throw "Item not found";
	
}
int indexsku(int SKU, InventoryItem* arr[], int numitems) {
	for (int i = 0; i < numitems; i++) {
		if (arr[i] != nullptr) {
			if (arr[i]->GetSKU() == SKU) {
				return i;
			}
		}
	}
	throw "Item not found";
}
void arraysquish(InventoryItem* arr[], int index, int numitems) {

	for (int k = 0; k < numitems; k++) {
		if (k >= index) {
			arr[k] = arr[k + 1];
		}
	}
}

void displayskus(LinkedList<InventoryItem>* lis) {
	int sku;
	for (int i = 0; i < lis->Size(); i++) {
		sku = lis->SeeNext()->GetSKU();
		cout<< sku <<endl;
		

	}
	lis->Reset();
}
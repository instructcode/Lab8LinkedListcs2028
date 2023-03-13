#include "LinkedList.h"
#include "Node.h"
#include <iostream>

using namespace std;

//constructor
template <typename T>
LinkedList<T>::LinkedList(){
	head = nullptr;
	tail = nullptr;
	length = 0;
	iterator = 0;
}
//destructor
template <typename T>
LinkedList<T>::~LinkedList(){

//Destructor – make sure you remove all items to avoid memory leaks
}
/*
The destructor destroys the list by deleting all its nodes. These functions are defined in
NumberList.cpp
*/
/*
// Constructor
19 NumberList()
20 { head = nullptr; }
*/



template <typename T>
void LinkedList<T>::AddItem(T* inval){
	//so far this is unordered
	//make sure the prev pointers that's at the start points to null

	if (length == 0) {
		//Node<T>* temp = tail;
		tail = new Node<T>(inval, tail);
		head = tail;
		length++;
	}
	else {
		Node<T>* temp = tail;
		tail = new Node<T>(inval, tail);
		temp->next = tail;
		length++;
	}
	//then do some ordering operation like merge sort
}


template <typename T>
void LinkedList<T>::Display() {
	Node<T>* temp = head;
	while (temp != nullptr) {
		cout << *temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}


template <typename T>
Node<T>* LinkedList<T>::GetItem(T* item, Node<T>* ptr) {
		//recursion
	//not done according to function
	//GetItem – searches the list for the given item.If found, it removes it from
	///	the listand returns it.If not found, it returns a null pointer.

		if (ptr != nullptr && *ptr->data < *item) {
			if (ptr->next != nullptr) {
				return GetItem(item, ptr->next);
			}
			else {
				return nullptr;
			}
		}
		else if (ptr != nullptr && *ptr->data == *item) {
			//****************************************
			//RIGHT HERE ADD THE REMOVE FUNCTION
			// It swaps pointers to cut out the item
			//*****************************************
			//PROBLEM
			//WHAT IF ITEM THATS GOTTEN IS HEAD PTR OR TAIL and theres 1 or 2
			//THIS NEXT FUNCTION ONLY WORKS ON SANDWICHED PTRS
			Node<T>* temp = PointerSwap(ptr->prev,ptr->next);
			return temp;
		}
		else {
			return nullptr;
		}}


template <typename T>
bool LinkedList<T>::IsInList(T* item){
	//returns a bool indicating if the given item is in the list.
	return Transverse(T, head);
}
template <typename T>
bool LinkedList<T>::IsEmpty(){
	if (length == 0)
		return true;
	else
		return false;
}
template <typename T>
int LinkedList<T>::Size() {
	// returns an int indicating the number of items in the list.
	return length;
}


template <typename T>
T* LinkedList<T>::SeeNext(T* item, Node<T>* ptr) {
/*
SeeNext – returns the item without removing it from the list at a given
location in the list. The class will maintain the next location and will start
at the first item in the list. When it gets to the last item in the list, it will
return a null pointer after it gets past the last item. If the list is empty, this
will throw an error. 2 calls to SeeNext will return the 2 items next to each
other in the list unless SeeAt or Reset is called in between the 2 calls (or
the first call returns the last item in the list).
*/
	if (ptr != nullptr && *ptr->data < *item) {
		if (ptr->next != nullptr) {
			return SeeAt(item, ptr->next);
		}
		else {
			throw "ListNotFlow";
			return nullptr;
		}
	}
	else if (ptr != nullptr && *ptr->data == *item) {
		return ptr;
	}
	else {
		throw "ListNotFlow";
		return nullptr;
	}

}

template <typename T>
T* LinkedList<T>::SeePrev(T* item){
//SeePrev – Same as SeeNext except in the other direction.
}


template <typename T>
Node<T>* LinkedList<T>::SeeAt(T* item, Node<T>* ptr){
/*
SeeAt – Finds an item at a location in the list (int passed in from user), and
returns the item without removing it. If the location passed by the user is
past the end of the list, this will throw an error. This will set the location
used by SeeNext to point at the item after the item returned.
*/
	
	//if(item>length) //what do they mean my location???
		//throw "ListNotFlow"
	
		if (ptr != nullptr && *ptr->data < *item) {
			if (ptr->next != nullptr) {
				return SeeAt(item, ptr->next);
			}
			else {
				throw "ListNotFlow";
				return nullptr;
			}
		}
		else if (ptr != nullptr && *ptr->data == *item) {
			return ptr;
		}
		else {
			throw "ListNotFlow";
			return nullptr;
		}
	
}
template <typename T>
void LinkedList<T>::Reset(){
//Reset – resets the location that the SeeNext function uses to point at the
//	first item in the list.
}

template <typename T>
void LinkedList<T>::Swap(Node<T>* ptr1, Node<T>* ptr2){
	//sequential swap only
	//does not swap for nonsequential nodes
	//should put if statement to make sure this only happens with
	//sequential nodes
	//also doesnt work when prev pointer points to head pointer
	//gotta fix all instances of that
	// *************************************************
	// //prev point that leads to head should never point to head. thats dumb
	//********************************************************
	//
	//Node<T>* Temp = ptr1;
	//Node<T>* Temp4 = ptr2;

	//Node<T>* Temp3 = ptr2->next;
	//ptr2->next = ptr1;
	//ptr1->next = Temp3;
	//ptr1 = ptr2;

	//Node<T>* Temp2 = ptr1->prev;
	//ptr1->prev = ptr2;
	//ptr2->prev = Temp2;
	//ptr1->next->prev = ptr1;
	T* temp = ptr1->data;
	ptr1->data = ptr2->data;
	ptr2->data = temp;

}
template <typename T>
Node<T>* LinkedList<T>::PointerSwap(Node<T>* ptr1, Node<T>* ptr2) {
	//sequential swap only
	//does not swap for nonsequential nodes
	//should put if statement to make sure this only happens with
	//sequential nodes
	//also doesnt work when prev pointer points to head pointer
	//gotta fix all instances of that
	// *************************************************
	// //prev point that leads to head should never point to head. thats dumb
	//********************************************************
	//
	if (ptr1 == head && length==0) {//or if 1st pointer or 2nd pointer null pointers
		return nullptr;
	}
	else if (ptr1 == head && length==1) {
		return nullptr;
	}
	else if (ptr1->next == tail && tail!=nullptr) {
		//***************************************************
	}
	else
	{
		//cuts out the NODE in between ptr1 and ptr2
		//should it delete hmmmmmmmmmmm??????
		//Node<T>* Temp = ptr1;
		//Node<T>* Temp4 = ptr2;

		Node<T>* Temp2 = ptr1->next;
		ptr1->next = ptr2;
		ptr2->prev = ptr1;

		Temp2->prev = nullptr;
		Temp2->next = nullptr;

		//Node<T>* Temp3 = ptr2->next;
		//ptr2->next = ptr1;
		//ptr1->next = Temp3;
		//ptr1 = ptr2;
		length--;
		return Temp2;

	}
	//this should remove the pointers to a middle item between and from
	//and the two sandwiching items should point to each other
	//basically if the two sandwiching items don't exist
	//there should be conditionals to handle these cases
	//they would be end or start of list


}
template <typename T>
void LinkedList<T>::NotYetMergeSort(){
	//bubble for now

	for (int k = 0; k < length - 1; k++) {
		Node<T>* temp = head;
		for (int j = 0; j < length-1-k; j++) {
			if (*temp->data > *temp->next->data) {
				Swap(temp, temp->next);
		}
			temp = temp->next;
		}
	}
}
/*

split(&head,&length/2,&length/2+1,&tail)
if(there is more than 2 items betqeen a and b)
split
exist merge conditions
order
merge

*/



template <typename T>
bool LinkedList<T>::Transverse(T* item, Node<T>* ptr) {
	//recursion
	
	if (ptr != nullptr && ptr->data < item) {
		if (ptr->next != nullptr) {
			return Transverse(item , ptr->next);
		}
		else {
			return false;
		}
	}
	else if (ptr != nullptr && ptr->data == item) {
		return true;
	}
	else {
		return false;
	}
}


/*
***********************************************************
************   model code			***********************
***********************************************************


Before you use the head pointer in any linked list operations, you must be sure it is initialized to nullptr because that marks the end of the list. Once you have declared a node data
structure and have created a null head pointer, you have an empty linked list. The next step
is to implement operations with the list.


void insert_head(T inval){

Node* temp = new Node(inval);
	temp->next = head;
	head = temp;
	length++;
}



void insert_tail(T inval){
Node* temp = new Node(inval);
	Node* curr = head;
	while (curr->next != nullptr){
		curr = curr->next;
	}
	curr->next = temp;
	length++;
}

void insert_at(T inval, int pos){
	}


void delete_head(){
Node* temp = head;
	head = head->next;
	delete temp;
	length--;
}

void delete_tail(){
Node* curr = head;
	while (curr->next->next != nullptr){
		curr = curr->next;
	}
	delete curr->next;
	curr->next = nullptr;
	length--;
}

void delete_at(int pos){
	}

	void InsertOrdered(T inval){
		Node* temp = new Node(inval);
		Node* curr = head;
		while (curr->next != nullptr && curr->next->data < inval){
			curr = curr->next;
		}
		temp->next = curr->next;
		curr->next = temp;
		length++;
	}

	T RemoveFront(){
	if(head == nullptr)
	{
	throw Emptylist Exception;
	}
		Node *temp = head;
		head = head->next;
		T retval=temp->data;
		delete temp;
		length--;
		return retval;

		}

		T RemoveEnd(){
		if(length==1){
		length--;
		int retval = head->data;
		delete head;
		head=nullptr;
		return retval;
		}
		if(isEmpty()) throw exception;
		Node *temp= head;
		while(temp->next->next!=nullptr){
		temp=temp->next;
			}
			int retval = temp->next->data;
			delete temp->next;
			temp->next=nullptr;
			length--;
			return retval;
			}






*/
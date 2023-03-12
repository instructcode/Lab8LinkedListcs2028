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
}
//destructor
template <typename T>
LinkedList<T>::~LinkedList(){}
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
void LinkedList<T>::AddItem(T inval){
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
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}



template <typename T>
T LinkedList<T>::GetItem(T item, Node<T>* ptr) {
		//recursion

		if (ptr != nullptr && ptr->data < item) {
			if (ptr->next != nullptr) {
				return GetItem(item, ptr->next);
			}
			else {
				return NULL;
			}
		}
		else if (ptr != nullptr && ptr->data == item) {
			return ptr->data;
		}
		else {
			return NULL;
		}}
template <typename T>
bool LinkedList<T>::IsInList(T){
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
int LinkedList<T>::Size(){}
template <typename T>
T LinkedList<T>::SeeNext(T){
}
template <typename T>
T LinkedList<T>::SeePrev(T){}
template <typename T>
T LinkedList<T>::SeeAt(T*){}
template <typename T>
void LinkedList<T>::Reset(){}
//DONT USE YET, NOT COMPLETE
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
	T temp = ptr1->data;
	ptr1->data = ptr2->data;
	ptr2->data = temp;

}
template <typename T>
void LinkedList<T>::NotYetMergeSort(){
	//bubble for now

	for (int k = 0; k < length - 1; k++) {
		Node<T>* temp = head;
		for (int j = 0; j < length-1-k; j++) {
			if (temp->data > temp->next->data) {
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
bool LinkedList<T>::Transverse(T item, Node<T>* ptr) {
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
#pragma once

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
//or 
//NODES
//double linked lists
//this is ordered
template <typename T>
class LinkedList/*Node*/ {
	//linked list makes nodes, nodes controlled and mapped by linked list class

public:
	LinkedList();
	~LinkedList();
	void AddItem(T);
	T GetItem();
	bool IsInList(T);
	bool IsEmpty();
	int Size();
	T SeeNext(T);
	T SeePrev(T);
	T SeeAt(T*);
	void Reset();
	void Swap(Node<T>* ptr1, Node<T>* ptr2);
	//add function printlist()
	void NotYetMergeSort();
	void Display();
	bool Transverse(T item, Node<T>* ptr);


	Node<T>* tail;
	Node<T>* head;// = null;
	int length;// = 0;

	//***************************************************
	//**********  MERGE SORT CAUSE ITS ORDEREd ***********
	//***************************************************

	//	OPERATORS OVERLOADED
		//for comparison of nodes
	//overloaded < > ==

private:
protected:
};
#endif
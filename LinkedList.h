#pragma once

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
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
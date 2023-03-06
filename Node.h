#pragma once
#ifndef NODE_H
#define NODE_H

using namespace std;

template <typename T>
class Node {
public:
	Node();
	~Node();
private:
protected:
	Node* prev;
	Node* next;
	//Node* root;
	//Node * tail;
	T data;
};
#endif
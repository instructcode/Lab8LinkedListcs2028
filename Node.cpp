#include "Node.h"

using namespace std;
//constructor
template <typename T>
Node<T>::Node(T inval, Node* hinter) {

	data = inval;
	if (hinter == nullptr) {
		prev = nullptr;
	}
	else {
		prev = hinter;
	}
	next = nullptr;
	//if(hinter!=nullptr)//if data doesnt exist, this points to root node
	//prev = hinter;
}
//destructor
template <typename T>
Node<T>::~Node() {

}

//Node* prev
//Node* next
//T data

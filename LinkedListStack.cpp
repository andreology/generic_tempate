//Andre Barajas

//This program creates a stack array and linked lists
#include "LinkedListStack.h"
//#include "Node.h"
#include <iostream>
//#include "Student.h"
using namespace std;
template <typename T>
LinkedListStack<T>::LinkedListStack()
{
	// TODO Auto-generated constructor stub
	head = NULL;
	tail = NULL;
	counter = 0;
}
template <typename T>
LinkedListStack<T>::LinkedListStack(int x)
{
	// TODO Auto-generated constructor stub
	head = NULL;
	tail = NULL;
	counter = 0;
}
template <typename T>
void LinkedListStack<T> :: push(const T& x)
{
	Node<char>* newPtr = new Node<char>;
	newPtr->setNextPtr(NULL);
	newPtr->setData(x);
	if(head == NULL)
	{
		head = newPtr;
		tail = newPtr;
		newPtr->setData(x);
		counter++;
	}else
	{
		newPtr->setNextPtr(head);
		newPtr->setData(x);
		head = newPtr;
	}
}
template <typename T>
void LinkedListStack<T>:: pop()
{
	Node<char>* temp = new Node<char>;
	temp = head;
	head = temp->getNextPtr();
	counter--;
	delete temp;
}
template <typename T>
Node<T> LinkedListStack<T>:: top()
{
	return *head;
}
template <typename T>
bool LinkedListStack<T>:: isEmpty()
{
	if(counter == 0)
		return true;
	else
	return false;
}
template <typename T>
void LinkedListStack<T>:: printStack()
{
	Node<char>* curr =  head;
//	Node* nex = new Node();
	if (head!=NULL)
	{
		//curr = head;
		//nex = NULL;
		while(curr->getNextPtr() !=NULL)
		{
			//cout << curr->getData().getName() << ", " << curr->getData().getId() << endl;
			curr = curr->getNextPtr();
		}
		//cout << curr->getData().getName() << ", " << curr->getData().getId() << endl;
	}

}
template <typename T>
LinkedListStack<T>::~LinkedListStack()
{
// TODO Auto-generated destructor stub
	if(head!=NULL)
	{
		Node<char>* curr = head;
		while(curr->getNextPtr() != NULL)
		{
			head = curr->getNextPtr();
			delete curr;
			curr = head;
		}
		delete curr;
	}
}
template <typename T>
Node<T>::Node()
{
	//data = NULL;
	nextPtr = NULL;
}
template <typename T>
Node<T>::Node(const T& data0)
{
	data = data0;
	nextPtr = NULL;

}
template <typename T>
void Node<T>::setData(T data0)
{
	data = data0;
}
template <typename T>
T Node<T>::getData() const
{
	return data;
}
template <typename T>
void Node<T>::setNextPtr(Node * ptr)
{
	nextPtr = ptr;
}
template <typename T>
Node<T>* Node<T>::getNextPtr() const
{
	return nextPtr;
}


#ifndef LINKEDLISTSTACK_H_
#define LINKEDLISTSTACK_H_

//#include"Student.h"
//#include "Node.h"
	template <typename T>
class Node
{
		private:
			T data;
			Node<T> *nextPtr;
		public:
			Node();
			//template <typename T>
			Node(const T&);
			void setData(T);
			T getData() const;
			void setNextPtr(Node*);
			Node* getNextPtr() const;

	};
template <typename T>
class LinkedListStack
{
private:
	Node<T>* head;
	//template <typename T>
	Node<T>* tail;
	int counter;
public:
	//PUSH, POP, TOP
	LinkedListStack();
	LinkedListStack(int);

	//template<typename T>
	void push(const T&);
	void pop();
	//template <typename T>
	Node<T> top();
	bool isEmpty();
	void printStack();
	virtual ~LinkedListStack();
};

#endif /* LINKEDLISTSTACK_H_ */

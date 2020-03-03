//============================================================================
// Name        : Andre Barajas
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Generic programming
//============================================================================

#include <iostream>
using namespace std;
#include <cstring>
#include <string>
#include "LinkedListStack.h"
void partOne(string);
bool isOpenPara(char x);
bool checkInput(string);
int main()
{

	string input;
	bool validating = false;
	do
	{
	cout << "Hello World" << endl; // prints Hello World
	cout << "A- infix-to-postfix" << endl;
	cout << "B- Postfix-to-infix" << endl;
	cout << "C- Exit "<< endl;
	cin >> input;
	validating = checkInput(input);
	if(validating==false){cout << "\t\t********Error: not a valid input, try again.********" << endl;}
	}while(validating==false);

	if((input.at(0) =='A') || (input.at(0) =='a'))
	{
		cout << "\n\t******Enter an infix expression******\t\n";
	 	 //string infix ="";
		string infix = "(A+B/C*(D+E)-F)";
	 	 cin >> infix;
		partOne(infix);
	}
	else if(input.at(0)=='B' or input.at(0) =='b')
		cout << "calling partTwo" << endl;
	else
		cout <<"Exiting program shutting down." << endl;
	return 0;
}


void partOne(string x)
{
	//(A+B/C*(D+E)-F)
	cout << x << endl;
	//template <typename T>
	LinkedListStack<char> stack;
	//stack.push('s');
	int operand;
	int operand0;
	char operatr;
	char paran;
	for(int i =0; i < (int)x.length(); i++)
	{
		char element = x.at(i);
		if(isOpenPara(element))
		{
			paran = element;
			stack.push(paran);
		}

		//if()
	}
}
bool isOpenPara(char x)
{
	if (x =='(')
		return true;
	else return false;
}
bool checkInput(string x)
{
	bool temp = false;

	if(x.at(0)== 'A' || x.at(0) =='a')
		temp = true;
	else if( x.at(0)=='B' or x.at(0) =='b' )
			temp = true;
	else if( x.at(0)=='C' or x.at(0) =='c')
		temp = true;

	return temp;
}

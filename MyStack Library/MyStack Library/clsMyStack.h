#pragma once

#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
using namespace std;

template <class T>
class clsMyStack: public clsMyQueue <T>
{


public:

	void Push(T Item) {
		//this->_MyList.InsertAtBeginning(Item); 
		clsMyQueue <T>::_MyList.InsertAtBeginning(Item);  
	}

	T Top() {
		//return this->Front();
		return clsMyQueue <T>::Front();
	}

	T Bottom() {
		//return this->Back();
		return clsMyQueue <T>::Back();
	}

};
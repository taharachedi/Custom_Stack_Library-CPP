#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;


template <class T>
class clsMyQueue
{

protected:
	clsDblLinkedList <T> _MyList; 

public:

	void Push(T Item) {

		_MyList.InsertAtEnd(Item);
	}

	void PushBack(T Item) {

		clsMyQueue<T>::Push(Item);
	}

	void Pop() {

		_MyList.DeleteFirstNode();
	}

	void Print() {

		_MyList.PrintList();
	}

	int Size() {

		return _MyList.Size();
	}

	bool IsEmpty() {

		return _MyList.IsEmpty();
	}

	T Front() {

		return _MyList.GetItem(0);
	}

	T Back() {

		return _MyList.GetItem(Size() - 1);
	}




	T GetItem(int Index) {

		return _MyList.GetItem(Index); 
	}

	void Reverse() {

		_MyList.Reverse();
	}

	void UpdateItem(int Index, T New_Value) {

		_MyList.UpdateItem(Index, New_Value);
	}

	void InsertAfter(int Index, T Value) {

		_MyList.InsertAfter(Index, Value); 
	}

	void InsertAtFront(T Value) {

		_MyList.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value) {

		_MyList.InsertAtEnd(Value);
	}

	void Clear() {

		_MyList.Clear();
	}

};
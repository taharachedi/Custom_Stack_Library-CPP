#pragma once
#include <iostream>
using namespace std;


template <class T>
class clsDblLinkedList
{

protected:
	int _Size = 0;

public:

	class Node {
	public:

		T Value;
		Node* Next;
		Node* Prev;
	};

	Node* head = NULL;

	void InsertAtBeginning(T Value) {

		Node* New_Node = new Node();
		New_Node->Value = Value;
		New_Node->Next = head;
		New_Node->Prev = NULL;

		if (head != NULL)
		{
			head->Prev = New_Node;
		}

		head = New_Node;
		_Size++;  
	}


	void PrintList() {

		Node* Current = head;

		cout << "NULL <--> ";
		while (Current != NULL) {

			cout << Current->Value << " <--> ";
			Current = Current->Next;
		}
		cout << "NULL\n";
		delete Current;   // Optional
	}


	Node* Find(T Value) {

		Node* Current = head;
		while (Current != NULL) {

			if (Current->Value == Value)
			{
				return Current;
			}

			Current = Current->Next;
		}

		return NULL;
	}



	void InsertAfter(Node* Current, T Value) {

		if (Current == NULL)
		{
			return;
		}

		Node* New_Node = new Node();
		New_Node->Value = Value;
		New_Node->Next = Current->Next;
		New_Node->Prev = Current;

		if (Current->Next != NULL)
		{
			Current->Next->Prev = New_Node;
		}

		Current->Next = New_Node;
		_Size++;
	}



	void InsertAtEnd(T Value) {

		Node* New_Node = new Node();
		New_Node->Value = Value;
		New_Node->Next = NULL;

		if (head == NULL)
		{
			New_Node->Prev = NULL;
			head = New_Node;
		}

		else
		{
			Node* Current = head;
			while (Current->Next != NULL) {

				Current = Current->Next;
			}

			New_Node->Prev = Current;
			Current->Next = New_Node;
		}

		_Size++;
	}



	void DeleteNode(Node*& NodeToDelete) {

		if (head == NULL || NodeToDelete == NULL)
		{
			return;
		}

		if (head == NodeToDelete)
		{
			head = NodeToDelete->Next; 
		}

		if (NodeToDelete->Next != NULL)
		{
			NodeToDelete->Next->Prev = NodeToDelete->Prev;
		}

		if (NodeToDelete->Prev != NULL)
		{
			NodeToDelete->Prev->Next = NodeToDelete->Next;
		}

		delete NodeToDelete;
		_Size--;
	}


	void DeleteFirstNode() {

		if (head == NULL)
		{
			return;
		}
		
		Node* temp = head;
		head = head->Next;

		if (head != NULL)
		{
			head->Prev = NULL;
		}
		delete temp;
		_Size--;
	}


	void DeleteLastNode() {

		if (head == NULL)
		{
			return;
		}

		if (head->Next == NULL)
		{
			delete head;
			head = NULL;
			_Size--;
			return;
		}

		Node* Current = head;
		while (Current->Next->Next != NULL) {

			Current = Current->Next;
		}

		Node* temp = Current->Next;

		Current->Next = NULL;
		delete temp;

		_Size--;
	}


	int Size() {

		return _Size;
	}

	bool IsEmpty() {

		return (_Size == 0) ? true : false;
	}

	void Clear() {

		while (_Size > 0) {

			DeleteFirstNode();
		}
	}


	void Reverse() {

		Node* Current = head;
		Node* Temp = nullptr;

		while (Current != nullptr) {
			// Swap Next & Prev Pointers Of The Current Node
			Temp = Current->Prev;
			Current->Prev = Current->Next;
			Current->Next = Temp;

			Current = Current->Prev; // Move To The Next Node
		}

		if (Temp != nullptr)
		{
			head = Temp->Prev; // Update head To Point To The Last Node
		}
	}


	Node* GetNode(int Index) {

		int Counter = 0;

		if (Index > _Size - 1 || Index < 0)
			return NULL; 

		Node* Current = head;
		while (Current != NULL && (Current->Next != NULL)) {

			if (Counter == Index)
				break;

			Current = Current->Next;
			Counter++;
		}
		
		return Current;
	}


	T GetItem(int Index) {

		Node* ItemNode = GetNode(Index);

		if (ItemNode == NULL)
			return NULL;
		else
			return ItemNode->Value; 
	}


	bool UpdateItem(int Index, T New_Value) {

		Node* ItemNode = GetNode(Index);

		if (ItemNode != NULL)
		{
			ItemNode->Value = New_Value;
			return true;
		}
		else
		{
			return false;
		}
	}


	bool InsertAfter(int Index, T Value) {

		Node* ItemNode = GetNode(Index); 

		if (ItemNode != NULL) 
		{
			InsertAfter(ItemNode, Value);   
			return true;
		}
		else
		{
			return false;
		}
	}
};
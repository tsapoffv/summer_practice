#pragma once
#include <iostream>
#include <cstring>

struct Node {
	int val;
	Node* next;
	Node() : val(0), next(nullptr) {}
	Node(int _val) : val(_val), next(nullptr) {}
};

struct list {
	Node* first;
	Node* last;

	list() : first(nullptr), last(nullptr) {}

	bool isEmpty();
	void insertFront(int _val);
	void print();
	int getValue(int _val);
	Node* operator[] (const int index);
	void insertFront(list& list, int _val);
	void insertAt(list& list, int index, int _val);
};

Node* mergeTwoSortedLists(Node* list1, Node* list2);

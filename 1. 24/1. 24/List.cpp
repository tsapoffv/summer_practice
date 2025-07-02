#include "List.h"



	bool list::isEmpty() {
		return first == nullptr;
	}

	void list::insertFront(int _val) {
		Node* p = new Node(_val);
		if (isEmpty()) {
			first = p;
			last = p;
			return;
		}
		last->next = p;
		last = p;
	}

	void list::print() {
		if (isEmpty()) return;
		Node* p = first;
		while (p) { 
			std::cout << p->val << " ";
			p = p->next;
		}
		std::cout << std::endl;
	}

	Node* list::operator[] (const int index) {
		if (isEmpty()) return nullptr;
		Node* p = first;
		for (int i = 0; i < index; i++) {
			p = p->next;
			if (!p) return nullptr;
		}
		return p;
	}

	void list::insertFront(list& list, int _val) {
		Node* newNode = new Node(_val);
		newNode->next = list.first;
		list.last = newNode; 
	}

	void list::insertAt(list& list, int index, int _val) {
		if (index < 0) return;

		if (index == 0) { 
			insertFront(list, _val);
			return;
		}

		Node* prevNode = list[index - 1]; 
		if (prevNode == nullptr) return;  

		Node* newNode = new Node(_val);
		newNode->next = prevNode->next;
		prevNode->next = newNode;
	}

	Node* mergeTwoSortedLists(Node* list1, Node* list2) {
		Node begin;
		Node* last = &begin;

		while (list1 != nullptr && list2 != nullptr) {
			if (list1->val <= list2->val) {
				last->next = list1;
				list1 = list1->next;
			}
			else {
				last->next = list2;
				list2 = list2->next;
			}
			last = last->next;
		}

		last->next = (list1 != nullptr) ? list1 : list2;

		return begin.next;
	}



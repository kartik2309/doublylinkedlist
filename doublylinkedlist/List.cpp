#include "stdafx.h"
#include "List.h"


List::List()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
	index = 0;
	y = false;
}


List::~List()
{
}

void List::addnode(int addnum)
{
	nodeptr n = new node;
	y = true;
	n->next = NULL;
	n->prev = NULL;
	n->data = addnum;
	if (head != NULL) {
		curr = head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		n->prev = curr;
		curr->next = n;
	}
	else {
		head = n;
	}
}

void List::delnode(int delnum)
{
	nodeptr delptr = NULL;
	curr = head;
	while (curr != NULL && curr->data != delnum) {
		curr = curr->next;
	}
	if (curr == NULL) {
		cout << "Your Number was Not to be Found";
		delete delptr;
	}
	else {
		delptr = curr;
		if (delptr == head) {
			head = head->next;
			delete curr;
			curr = NULL;
		}
		curr->prev->next = curr->next;
	}
}

void List::printlist()
{
	curr = head;
	while (curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}

void List::search(int num)
{
	curr = head;//O(n)
	while (curr != NULL && curr->data != num) {
		index++;
		curr = curr->next;
	}
	if (curr == NULL) {
		cout << num << " wasn't found in the list" << endl;
	}
	else {
		cout << num << " was found at index " << index << " and position" << index + 1 << endl;
	}
}



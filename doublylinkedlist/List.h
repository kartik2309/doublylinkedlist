#pragma once
#include<iostream>

using namespace std;

class List
{
	typedef struct node
	{
		node* prev;
		int data;
		node* next;
	}*nodeptr;nodeptr head, curr, temp;
public:
	List();
	~List();
	bool y ; int index;
	void addnode(int);
	void delnode(int);
	void printlist();
	void search(int);
};


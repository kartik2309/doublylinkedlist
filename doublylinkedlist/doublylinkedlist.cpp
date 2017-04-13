// doublylinkedlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"List.h"
List* list = new List;

int main()
{
	char i;
	int num;
	while (true) {
		if (list->y == false) {
			cout << "Enter the first element of the first node:";
			cin >> num;
			list->addnode(num);
		}
		else {
			cout << "Press'a' to add data,Press 'd' to delete data,Press 'p' to print the list,Press 'x' to stop!,Press 's' to search the list:" << endl;
			cin >> i;
			if (i == 'a')
			{
				cout << "add a number:";
				cin >> num;
				list->addnode(num);
			}
			else if (i == 'd') {
				cout << "delete a number:";
				cin >> num;
				list->delnode(num);
			}
			else if (i == 'p') {
				list->printlist();
			}
			else if (i == 'x') {
				cout << "Stopped!" << endl;
				list->printlist();
				cout << "Press 'x' to exit application and 'c' to continue:";
				cin >> i;
				if (i == 'x')
					exit(EXIT_FAILURE);
				else if (i == 'c')
					continue;
				else cout << "Invalid input!Try again." << endl;
				break;
			}
			else if (i == 's') {
				cout << "The number you want to search is:" << endl;
				cin >> num;
				list->search(num);
			}
			else  cout << "Inavlid Input" << endl;
		}
	}
	system("Pause");
	return 0;
}



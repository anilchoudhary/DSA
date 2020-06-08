#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
	int data;

	Node *next, *random;

	Node(int data)
	{
		this->data = data;
		this->next = this->random = NULL;
	}
};

class LinkedList
{
public:
	Node *head;

	LinkedList(Node *head)
	{
		this->head = head;
	}

	void push(int data)
	{
		Node *node = new Node(data);
		node->next = head;
		head = node;
	}

	void print()
	{
		Node *temp = head;
		while (temp != NULL)
		{
			Node *random = temp->random;
			int randomData = (random != NULL) ?
			                 random->data : -1;
			cout << "Data = " << temp->data
			     << ", ";
			cout << "Random Data = " <<
			     randomData << endl;
			temp = temp->next;
		}
		cout << endl;
	}

	LinkedList* clone()
	{
		Node *origCurr = head;
		Node *cloneCurr = NULL;

		unordered_map<Node*, Node*> mymap;

		while (origCurr != NULL)
		{
			cloneCurr = new Node(origCurr->data);
			mymap[origCurr] = cloneCurr;
			origCurr = origCurr->next;
		}

		origCurr = head;

		while (origCurr != NULL)
		{
			cloneCurr = mymap[origCurr];
			cloneCurr->next = mymap[origCurr->next];
			cloneCurr->random = mymap[origCurr->random];
			origCurr = origCurr->next;
		}

		return new LinkedList(mymap[head]);
	}
};

int main()
{
	LinkedList *mylist = new LinkedList(new Node(5));
	mylist->push(46);
	mylist->push(493);
	mylist->push(12);
	mylist->push(91);

	mylist->head->random = mylist->head->next->next;

	mylist->head->next->random =
	    mylist->head->next->next->next;

	mylist->head->next->next->random =
	    mylist->head->next->next->next->next;

	mylist->head->next->next->next->random =
	    mylist->head->next->next->next->next->next;

	mylist->head->next->next->next->next->random =
	    mylist->head->next;

	LinkedList *clone = mylist->clone();

	cout << "Original linked list\n";
	mylist->print();
	cout << "\nCloned linked list\n";
	clone->print();
}

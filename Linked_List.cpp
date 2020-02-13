#include<iostream>
#include<iomanip>

using namespace std;

class Llist
{

public:
	int val;
	Llist * next;
}*start=NULL;

void insert(int value)
{
	//Insertion at the start O(1)

	Llist * node;
	node = new Llist;

	if(node==NULL)
		cout<<"OVERFLOW !!";

	else
	{
		node->next = start;
		start = node;
		node->val = value;
	}
}

void del(int key)
{
	// Deletion of any given key

	int val;
	Llist *temp, *prev;

	if(start==NULL)
		cout<<"UNDERFLOW!!";

	else if(start->val==key)
	{
		temp = start;
		start = start->next;
		delete temp;
	}

	else
	{
		temp = start;
		temp = temp->next;
		prev = start;

		while(temp->val!=key)
		{
			temp = temp->next;
			prev = prev->next;
		}

		prev->next = temp->next;
		delete temp;
	}
}


void traverse()
{
	// Traversing the list

	Llist *temp;
	temp = start;

	if(start==NULL)
	{
		cout<<"List is Empty !!\n";
	}

	else
	{
		while(temp!=NULL)
		{
			cout<<temp->val<<setw(4);
			temp = temp->next;
		}
	}
}

int main()
{
	int choice, val, delValue;

	do
	{
		cout<<"\n1.Insert\n2.Delete\n3.Traverse\n4.Exit\nEnter a choice :";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter a value to insert :";
				cin>>val;
				insert(val);
				break;

			case 2:
				if(start!=NULL)
				{
					traverse();
					cout<<"\nEnter a value to delete from the choices above :";
					cin>>delValue;
					del(delValue);
					break;
				}

				else
				{
					traverse();
					break;
				}

			case 3:
				traverse();
				break;

			case 4: continue;

			default: cout<<"Enter proper choice!!";
		}

	}while(choice!=4);

	return 0;
}

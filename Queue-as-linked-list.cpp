#include<iostream>

using namespace std;


struct node
{
	int data;
	node * next;
}*front = NULL, *rear = NULL;


void insert()
{
	node *ptr;
	ptr = new node;

	if(ptr == NULL)
		cout<<"\n***** OVERFLOW !! *****\n";


	else if(front == NULL && rear == NULL)
	{
		cout<<"\nEnter value to insert : ";
		cin>>ptr->data;
		ptr->next = rear;
		front = ptr;
		rear = ptr;
	}

	else
	{
		cout<<"\nEnter value to insert : ";
		cin>>ptr->data;
		rear->next = ptr;
		ptr->next = NULL;
		rear = ptr;
	}
}


void del()
{
	node *temp = front;

	if(front == NULL && rear == NULL )
		cout<<"\n***** UNDERFLOW !! *****\n";

	else if(front == rear)
	{
		cout<<"\nDeleted value : "<<front->data<<endl;
		delete front;
		front = NULL;
		rear = NULL;

	}

	else
	{
		if(temp->next != NULL)
		{
			cout<<"\nDeleted value : "<<front->data<<endl;
			temp = temp->next;
			delete front;
			front = temp;
		}

	}
}


void display()
{
	if(front == NULL && rear == NULL)
	{
		cout<<"\nQueue's front : NULL";
		cout<<"\nQueue's rear : NULL"<<endl;
	}

	else
	{
		cout<<"\nQueue's front : "<<front->data;
		cout<<"\nQueue's rear : "<<rear->data<<endl;
	}

}


int main()
{
	int ch;
	cout<<"\nChoose from operations :"<<endl;
	do
	{

		cout<<"\n1. INSERT\n2. DELETE\n3. QUEUE'S FRONT & REAR\n4. EXIT";
		cout<<"\nEnter choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: insert();
					break;

			case 2: del();
					break;

			case 3: display();
					break;

			case 4: break;

			default :
					cout<<"\nEnter proper choice !!"<<endl;

		}
	}while(ch != 4);

	return 0;
}

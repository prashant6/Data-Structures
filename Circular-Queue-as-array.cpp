#include<iostream>

using namespace std;

const int max_size = 5;
int Queue[max_size], front = -1, rear = -1;


void insert()
{
	

	if( (rear+1) % max_size == front)
	{
		cout<<"\n***** OVERFLOW *****\n";
		return;
	}

	else if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
	}

	else if(rear == max_size - 1 && front != 0)
	{
		rear = 0;
	}

	else
	{
		rear++;
	}

	cout<<"\nEnter a value to insert : ";
	cin>>Queue[rear];
	
}



void del()
{
	

	if(front == -1)
	{
		cout<<"\n***** UNDERFLOW *****\n";
		return ;
	}



	else if(front != rear)
	{
		cout<<"\nDeleted Element : "<<Queue[front]<<endl;
		front = (front + 1) % max_size;
	}

	else
	{
	    
		cout<<"\nDeleted Element : "<<Queue[front]<<endl;
		front = -1;
		rear = -1;
	}
}


void display()
{
	if (front == -1)
	{
		cout<<"\nList is Empty !!\n";
	}

	else
	{
		cout<<"Queue's rear : "<<Queue[rear];
		cout<<"\nQueue's front : "<<Queue[front]<<endl;
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
			case 1:
					insert();
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

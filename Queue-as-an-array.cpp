#include<iostream>

using namespace std;

const int max_size = 20;
int Queue[max_size], front = -1, rear = -1;

void insert()
{

	if(front == -1)
	{
		front++;
		rear++;
        cout<<"\nEnter value to insert : ";
		cin>>Queue[rear];

	}

	else if(rear == max_size-1)
	{
		cout<<"\nOVERFLOW !!"<<endl;
	}

	else
	{
		rear++;
		cout<<"\nEnter value to insert : ";
		cin>>Queue[rear];

	}

}

void del()
{

	if( front == -1 )
		cout<<"\nUNDERFLOW"<<endl;

	else if(front==rear)
	{
		cout<<"\nDeleted Element : "<<Queue[front]<<endl;
		front=-1;
		rear=-1;
	}

	else
	{
		cout<<"\nDeleted Element : "<<Queue[front]<<endl;

		for(int i=0; i<rear; i++)
		{
			Queue[i]=Queue[i+1];
		}

		front=0;
		rear--;  
	}
}

void display()
{
	if (front == -1)
	{
		cout<<"Queue's front : NULL"<<endl;
		cout<<"Queue's rear : NULL"<<endl;
	}


	else
	{
		cout<<"\nQueue's front : "<<Queue[front];
		cout<<"\nQueue's rear : "<<Queue[rear];
		cout<<endl;
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

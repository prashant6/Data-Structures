#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;

}*front = NULL, *rear = NULL;


void insert()
{
	node *temp;
	node *ptr = new node;

	if(ptr == NULL)
	{
		cout<<"\n***** OVERFLOW *****\n";
		return;
	}

	else if(front == NULL)
	{
		front = ptr;
		rear = ptr;
		ptr->next = front;
	}

	else
	{
	    rear->next = ptr;
		ptr->next = front;
		rear = ptr;
    }

	cout<<"\nEnter a value to insert : ";
	cin>>ptr->data;
}


void del()
{
    node *temp;
    temp = front;

    if(front == NULL)
    {
        cout<<"\n***** UNDERFLOW *****\n";
        return;
    }

    else if(temp->next == front)
    {
        front = NULL;
        rear = NULL;
        cout<<"\nDeleted Value : "<<temp->data<<endl;
        delete temp;
    }

    else
    {
            temp = temp->next;
            rear->next = temp;
            cout<<"\nDeleted Value : "<<front->data<<endl;
            delete front;
            front = temp;
    }


}


void display()
{
    if(front == NULL)
    {
        cout<<"\nCircular List is Empty !!\n";
        return;
    }

    else
    {
        cout<<"\nCircular Queue's rear : "<<rear->data<<endl;
        cout<<"\nCircular Queue's front : "<<front->data<<endl;
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

// stack as linked list

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


struct node
{
	node * next;
	int data;
} *top = NULL;



void push(int val)
{
	node * ptr;
	ptr = new node;

	if (ptr == NULL)
		cout<<"/nOVERFLOW!!";

	else {

		ptr->next = top;
		top = ptr;
		ptr->data = val;
	}
}

void pop()
{
	node * temp;
	temp = top;

	if (top == NULL)
		cout<<"\n UNDERFLOW !!";

	else{

		temp = top;
		cout<<"\nPopped Element :"<<top->data<<"\n";
		top = top->next;
		delete temp;

	}

}


void top_val()
{
	if(top == NULL)
		cout<<"\nList Empty";
	else
	cout<<"\nTOP :"<<top->data<<"\n";
}

int main()
{
	int val, n;
	char ch;
    int x;

	do{
		cout<<"\nChoose from Operations\n";
		cout<<"1. PUSH\n2. POP\n3. TOP\n4. Exit\nEnter Choice : ";
		cin>>x;
		switch(x)
		{
			case 1:
				cout<<"\nEnter value :";
				cin>>val;
				push(val);
				break;

			case 2:
				pop();
				top_val();
				break;

			case 3:
				top_val();

			case 4:
				break;

            default:
                cout<<"\nEnter proper choice !!\n";
		}

	}while(x!=4);



return 0;
}


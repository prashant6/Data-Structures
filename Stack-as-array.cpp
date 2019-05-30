#include<iostream>

using namespace std;

int top = -1;
const int max_size = 5;
int stack[max_size];

void push()
{
	int ch;

	if(top == max_size-1)
		cout<<"\nOVERFLOW !!"<<endl;

	else
	{
	    cout<<"\nEnter value to be pushed : ";
        cin>>ch;
		top++;
		stack[top] = ch;
	}
}


void pop()
{
	int val;

	if(top == -1)
		cout<<"\nUNDERFLOW !!"<<endl;

	else
	{
		val = stack[top];
		top--;
		cout<<"\nPopped Element : "<<val<<endl;
	}

}

void top_val()
{
    if (top == -1)
        cout<<"\nLIST IS EMPTY !!"<<endl;
    else
	cout<<"\nTOP : "<<stack[top]<<endl;
}


int main()
{
	int n;

	do{
		cout<<"\nChoose from the Operations"<<endl;
		cout<<"\n1. PUSH\n2. POP\n3. TOP\n4. EXIT \n";
		cout<<"Enter your choice : ";
		cin>>n;
		switch(n)
		{
			case 1:
				push();
				break;

			case 2:
				pop();
				top_val();
				break;

			case 3:
				top_val();
				break;

			case 4:
				break;

			default :
			cout<<"\nEnter proper choice !"<<endl;
		}

	}while(n != 4);


	return 0;
}

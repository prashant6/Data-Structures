#include<iostream>

using namespace std;

class q1
{

public:
	q1 *n1;
	int val1;
	void enq1(int);
	int deq1();

}*f1=NULL, *r1=NULL;



class q2
{

public:
	q2 *n2;
	int val2;
	void enq2(int);
	int deq2();

}*f2=NULL, *r2=NULL;


void q1::enq1(int val)
{
	q1 *temp;

	temp = new q1;
	temp->n1=NULL;


	if(temp==NULL)
		{
			cout<<"OVERFLOW !!";

		}

	else if(f1==NULL)
	{
		f1=temp;
		r1=temp;
		temp->n1=NULL;
	}

	else
	{
		r1->n1=temp;
		r1=temp;
	}

	temp->val1=val;
}


void q2::enq2(int val)
{
	q2 *temp;

	temp = new q2;
	temp->n2=NULL;


	if(temp==NULL)
		{
			cout<<"OVERFLOW !!";

		}

	else if(f2==NULL)
	{
		f2=temp;
		r2=temp;

	}

	else
	{
		r2->n2=temp;
		r2=temp;
	}

	temp->val2=val;
}


int q1::deq1()
{
	q1 *temp;
	int a;

	if(f1==NULL)
	{
		cout<<"UNDERFLOW !!";

	}

	else if(f1==r1)
	{
		temp=r1;
		f1=NULL;
		r1=NULL;
		a=temp->val1;
		delete temp;
		return a;
	}

	else
	{
		temp=f1;
		f1=f1->n1;
		a=temp->val1;
		delete temp;
		return a;
	}

}

int q2::deq2()
{
	q2 *temp;
	int a;

	if(f2==NULL)
	{
		cout<<"UNDERFLOW !!";
		return 0;
	}

	else if(f2==r2)
	{
		temp=r2;
		f2=NULL;
		r2=NULL;
		a=temp->val2;
		delete temp;
		return a;
	}

	else
	{
		temp=f2;
		f2=f2->n2;
		a=temp->val2;
		delete temp;
		return a;
	}

}


int main()
{
	q1 ob1;
	q2 ob2;
	int nos, val;

	cout<<"Enter total nos to be pushed :";
	cin>>nos;

	while(nos!=0)
	{
		cout<<"Enter the value to be pushed :";
		cin>>val;
		ob1.enq1(val);
		nos--;
	}


	while(f1!=NULL || f2!=NULL)
	{
		if(f2==NULL)
		{
			while(f1->n1!=NULL)
		{

			ob2.enq2(ob1.deq1());
		}
			cout<<ob1.deq1()<<"\n";
		}

		else if(f1==NULL)
		{
			while(f2->n2!=NULL)
		{
			ob1.enq1(ob2.deq2());
		}
			cout<<ob2.deq2()<<"\n";
		}

	}

	return 0;
}

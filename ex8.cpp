#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class stack
{
    int stk[5];
    int top;
    public:stack()
    {
	top=-1;
    }
    void push()
    {
	if(top>=4)
	{
	    cout<<"\n stack overflow";
	    return;
	}
	top=top+1;
	cout<<"\n Enter the value:";
	cin>>stk[top];
	cout<<stk[top]<<"is inserted..";
    }
    void pop()
    {
	if(top<0)
	{
	    cout<<"\nstack underflow";
	    return;
	}
	cout<<stk[top--]<<"is deleted";
	}
	    void display()
	    {
		if(top<0)
		{
		    cout<<"\nstack is empty";
		    return;
		}
		cout<<"\nStack elements are:";
		for(int i=top;i>=0;i--)
		{
		     cout<<"\t"<<stk[i];
		}
		cout<<"\n";
	    }
	};
	main()
	{
	    clrscr();
	    int ch;
	    stack s;
	    cout<<"\n\t\t Array Implementation using Stack";
	    cout<<"\n\t\t*********************\n";
	    while(1)
	    {
		cout<<"\n1.push \n2.pop \n3.Display \n4.Exit";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
		    case 1:
		    s.push();
		    break;
		    case 2:
		    s.pop();
		    break;
		    case 3:
		    s.display();
		    break;
		    case 4:
		    exit(0);
		    break;
		}
	    }
	    return 0;
	}
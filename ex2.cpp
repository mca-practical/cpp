#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
int data;
struct node*next;
}
*front=NULL, *rear,* temp;
void ins()
{
temp=new node;
cout<<"Enter data:";
cin>>temp->data;
temp->next=NULL;
if(front==NULL)
front=rear=temp;
else
{
rear->next=temp;
rear=temp;
}}
void del() {
if(front==NULL)
cout<<"Queue is empty\n";
else
{
temp=front;
front=front->next;
cout<<"Deleted node is"<<temp->data<<"\n";
delete(temp);
}}
void dis()
{
if(front==NULL)
cout<<"Queue is empty\n";
else {
temp=front;
while(temp!=NULL) {
cout<<temp->data<<"->";
temp=temp->next;
}}
};
main()
{
clrscr();
int ch;
cout<<"\n\tLinked List Implementation of Queue";
cout<<"\n\t************************************";
while(1){
cout<<"\n1.Insert\n2.delete\n3.Display\n4.Exit\n";
cout<<"Enter your choice:";
cin>>ch;
cout<<"\n";
switch(ch){
case 1:ins();
       break;
case 2:del();
       break;
case 3:dis();
       break;
case 4:exit(0);

cout<<"Wrong choice!!!";
}
getch();
}
}






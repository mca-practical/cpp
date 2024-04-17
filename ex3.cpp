#include<iostream.h>
#include<conio.h>
#define MAX 100
int a[MAX],h,i,l,n;
void main()
{
    void input();
    clrscr();
    input();
    getch();
}
void input()
{
    void quicksort(int a[],int l,int h);
    void output(int a[],int n);
    cout<<"\nQUICK SORT";
    cout<<"\n**********";
    cout<<"\nEnter the limit:";
    cin>>n;
    cout<<"\nEnter the elements:";
    for(i=0;i<n;i++)
    cin>>a[i];
    i=0;
    h=n-1;
    quicksort(a,l,h);
    cout<<"\nSorted array is:";
    output(a,h);
}
void quicksort(int a[],int l,int h)
{
    int temp,key,low,high;
    low=l;
    high=h;
    key=a[(low+high)/2];
    do
    {
     while(key>a[low])
     low++;
     while(key<a[high])
     high--;
     if(low<=high)
     {
      temp=a[low];
      a[low++]=a[high];
      a[high]=temp;
     }
    }
    while(low<=high);
    if(l<high)
    quicksort(a,l,high);
    if(low<h)
    quicksort(a,low,h);
}
void output(int a[],int n)
{
    for(i=0;i<=n;i++)
    cout<<a[i]<<"\t";
}
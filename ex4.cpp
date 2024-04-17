#include<iostream.h>
#include<conio.h>
void main()
{
int a[100],b[100],c[100],i,j,k=0,m,n,t;
clrscr();
cout<<"\nmerge sort";
cout<<"\n*****";
cout<<"\n enter the limit of array a:";
cin>>m;
cout<<"\n enter the limit of array b:";
cin>>n;
cout<<"\n enter "<<m<<"number of elements in array a:";
for(i=0;i<m;i++)
cin>>a[i];
cout<<"\n enter"<<n<<"number of elements b:";
for(i=0;i<n;i++)
cin>>b[i];
i=j=0;
while(i<m&&j<n)
{
if(a[i]<b[j])
{
c[k+1]=a[i];
i++;
}
else if(a[i]>b[j])
{
c[k++]=b[j];
j++;
}
else
{
c[k++]=a[i];
c[k++]=b[j];
i++;
j++;
}
}
if(i<m)
for(i=0;i<m;i++)
c[k++]=a[i];
if(j<n)
for(j=0;j<n;j++)
c[k++]=b[j];
for(i=0;i<k;i++)
{
for(j=0;j<k;j++)
{
if(c[i]<c[j])
{
t=c[i];
c[i]=c[j];
c[j]=t;
}
}
}
cout<<"\n the no in array is:";
for(i=0;i<k;i++)
cout<<c[i]<<"\t";
getch();
}
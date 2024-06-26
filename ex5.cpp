#include<iostream.h>
#include<conio.h>
class poly
{
int n;
int deg[20];
int coeff[20];
public:
void getdata();
void putdata();
friend void putdatasum(poly);
poly operator +(poly);
};
void poly::getdata()
{
cout<<"\n\tEnter the no. of terms:";
cin>>n;
cout<<"\n\tEnter the degrees and coefficients:";
for(int i=0;i<n;i++)
{
cin>>deg[i];
cin>>coeff[i];
}
}
void poly::putdata()
{
for(int i=0;i<n;i++)
{
if (i==0)
cout<<coeff[i]<<"x^"<<deg[i];
else if(deg[i]==0)
cout<<"+"<<coeff[i];
else
cout<<"+"<<coeff[i]<<"x^"<<deg[i];
}
}
void putdatasum(poly c)
{
for(int i=0;i<c.n;i++)
{
if (i==0)
cout<<c.coeff[i]<<"x^"<<c.deg[i];
else
cout<<"+"<<c.coeff[i]<<"x^"<<c.deg[i];
}
}
poly poly::operator +(poly c)
{
poly d;
d.n=0;
int i=0;
int j=0;
int k=0;
while(n>0 && c.n>0)
{
if (deg[i]==c.deg[j])
{
d.coeff[k]=coeff[i]+c.coeff[j];
d.deg[k]=deg[j];
d.n++;
n--;
c.n--;
i++;
j++;
k++;
}
else if (deg[i]>c.deg[j])
{
d.coeff[k]=coeff[i];
d.deg[k]=deg[i];
d.n++;
n--;
i++;
k++;
}
else
{
d.coeff[k]=c.coeff[j];
d.deg[k]=c.deg[j];
d.n++;
c.n--;
j++;
k++;
}
}
while (n>0)
{
d.coeff[k]=coeff[i];
d.deg[k]=deg[i];
d.n++;
n--;
i++;
k++;
}
while (c.n>0)
{
d.coeff[k]=c.coeff[j];
d.deg[k]=c.deg[j];
d.n++;
c.n--;
j++;
k++;
}
return(d);
}
int main()
{
clrscr();
poly A,B,C;
cout<<"\n\tPolynomial Addition\n";
cout<<"\t=====================";
cout<<"\n\n\tEnter the details of 1st polynomial:";
A.getdata();
cout<<"\n\n\tEnter the details of 2nd polynomial:";
B.getdata();
cout<<"\n\n\t1st polynomial=";
A.putdata();
cout<<"\n\n\t2nd polynomial=";
B.putdata();
cout<<"\n\n\tSum=";
C=A+B;
putdatasum(C);
getch();
return 0;
}

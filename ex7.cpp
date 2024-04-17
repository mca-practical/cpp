#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int m,n,mat[10][10];
    cout<<"Enter the dimensions of the matrix:";
    cin>>m>>n;
    int zeros=0;
    cout<<"Enter the elements of the matrix:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==0)
            {
                zeros++;   
            }
        }
    }
    cout<<"the matrix is\n";
    for(i=0;i<m;i++)
    {
      for(int j=0;j<n;j++) 
      {
        cout<<mat[i][j]<<"";
      } 
      cout<<"\n";
    }
    if(zeros>(m*n)/2)
    {
        cout<<"The matrix is a sparse matrix";
    }
    else
    {
        cout<<"the matrix is not a sparse matrix";
    }
    getch();
}
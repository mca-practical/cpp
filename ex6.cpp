#include<iostream.h>
#include<conio.h>
struct graph
{
    int s,a[10][10];
};
int visited[10],v;
void dft();
void traverse(struct graph,int);
struct graph g;
void main()
{
    clrscr();
    int i,j,a;
    cout<<"\n\n\tDEPTH FIRST SEARCH";
    cout<<"\n\nt*******************";
    for(i=1;i<=10;i++)
    for(j=1;j<=10;j++)
    g.a[i][j]=10;
    cout<<"\n\n\tEnter the number of vertices:";
    cin>>g.s;
    for(i=1;i<g.s;i++)
    {
        cout<<"\n\n\tEnter 0 to terminate";
        cout<<"\n\n\tVertex connected with"<<i<<":";
        cin>>j;
        while(j>0&&j<=g.s)
        {
            g.a[i][j]=1;
            cout<<"\n\n\tNew vertex connected with"<<i<<":";
            cin>>j;
        }
    }
    cout<<"\n\n\tDepth first search is:";
    dft();
    getch();
}
void dft()
{
    int v;
    for(v=1;v<=g.s;v++)
    {
        visited[v]=0;
        for(v=1;v<=g.s;v++)
        if(visited[v]==0)
        traverse(g,v);
    }
}
void traverse(struct graph,int v)
{
    int w;
    visited[v]=1;
    cout<<"\t"<<v;
    for(w=1;w<=g.s;w++)
    if((visited[w]==0)&&(g.a[v][w]==1))
    traverse(g,w);
}
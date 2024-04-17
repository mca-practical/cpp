#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct treenode
{
    int item;
    treenode*left,*right;
};
treenode*buildtree(treenode*,int);
void inorderprint(treenode*);
void preorderprint(treenode*);
void postorderprint(treenode*);
void main()
{
    treenode*root=NULL;
    int n;
    clrscr();
    cout<<"\n BINARY TREE";
    cout<<"\n ***********";
    while(1)
    {
        cout<<"\n\nEnter the value(0 to stop):";
        cin>>n;
        if(n==0)
        break;
    root=buildtree(root,n);
    }
    cout<<"\n\nTree inorder traversal is:";
    inorderprint(root);
    cout<<"\n\nTree preorder traversal is:";
    preorderprint(root);
    cout<<"\n\nTree postorder traversal is:";
    postorderprint(root);
    getch();
    return;
}
treenode*buildtree(treenode*root,int data)
{
    if(root==NULL)
    {
        root=new treenode;
        root->item=data;
        root->left=NULL;
        root->right=NULL;
    }
    else if(data<=root->item)
    root->left=buildtree(root->left,data);
else
root->right=buildtree(root->right,data);
return root;
}
void postorderprint(treenode*root)
{
    if(root!=NULL)
    {
        postorderprint(root->left);
        cout<<root->item<<"\t";
        postorderprint(root->right);
    }
}
void inorderprint(treenode*root)
{
    if(root!=NULL)
    {
        inorderprint(root->left);
        cout<<root->item<<"\t";
        inorderprint(root->right);
    }
}
void preorderprint(treenode*root)
{
    if(root!=NULL)
    {
        preorderprint(root->left);
        cout<<root->item<<"\t";
        preorderprint(root->right);
    }
}
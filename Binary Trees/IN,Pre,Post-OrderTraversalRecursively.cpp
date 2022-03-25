
#include<bits/stdc++.h>
using namespace std;

class node{

public:
int data;
node* left;
node* right;

node(int val)
{
    data=val;
    left=NULL;
    right=NULL;
}
};


void preorder(node* root)
{

if(root==NULL)
{
    return;
}
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);

}

void inorder(node* root)
{

if(root==NULL)
{
    return;
}

inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}


void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root=new node(1);
    node* n1=new node(2);
    node* n2=new node(3);
    node* n3=new node(4);
    node* n4=new node(5);

    root->left=n1;
    root->right=n2;

    n1->left=n3;
    n1->right=n4;

    cout<<"Preorder traversal"<<endl;
    preorder(root);
    cout<<endl;


    cout<<"Inorder traversal"<<endl;
    inorder(root);
    cout<<endl;


    cout<<"Postorder traversal"<<endl;
    postorder(root);
    cout<<endl;
}



#include<iostream>
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


node* mirror(node* root)
{
    if(root==NULL)
    {
        return root;
    }

    //swap left and right child
    node* temp=root->left;
    root->left=root->right;
    root->right=temp;

    //for left subtree
    if(root->left!=NULL)
    {
        mirror(root->left);
    }

    //for right subtree
    if(root->right!=NULL)
    {
        mirror(root->right);
    }

    //return root
    return root;
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



int main()
{

//creating BT
  node* root=new node(1);

  node* n1=new node(2);
  node* n2=new node(3);
  node* n3=new node(4);
  node* n4=new node(5);

    root->left=n1;
    root->right=n2;

    n1->left=n3;
    n1->right=n4;


 cout<<"Inorder of orignal tree: ";
    inorder(root);
     cout<<endl;


cout<<"Inorder of mirror tree: ";
     node* newRoot=mirror(root);

    inorder(newRoot);



}

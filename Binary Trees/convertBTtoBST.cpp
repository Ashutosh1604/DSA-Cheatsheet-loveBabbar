
#include<bits/stdc++.h>
using namespace std;

class node
{
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

// to create BST by sorted inorder of BT

void inorderBST(node* root,vector<int> &v,int &i)
{

if(root==NULL)
{
    return;
}

inorderBST(root->left,v,i);
root->data=v[i];
i++;
inorderBST(root->right,v,i);

}


//to store inorder in vector
void inorderBT(node* root,vector<int> &v)
{

if(root==NULL)
{
    return;
}

inorderBT(root->left,v);
v.push_back(root->data);
inorderBT(root->right,v);

}


//inorder traversal
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
    node* root=new node(1);


    node* n1=new node(2);
    node* n2=new node(3);
    node* n3=new node(4);



    root->left=n1;
    root->right=n2;

    n1->left=n3;


    //binary tree
    inorder(root);
    cout<<endl;


    vector <int> v;  //to store inorder
  inorderBT(root,v);

  sort(v.begin(),v.end());  //sort inorder

  int i=0;     //to traverse vector

  inorderBST(root,v,i);    //convert to bst
    inorder(root);   //binary search tree






}




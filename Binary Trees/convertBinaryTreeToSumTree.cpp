


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


int bToST(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int LSum=bToST(root->left);  //find sum of left subtree
    int RSum=bToST(root->right);  //find sum of right subtree

     int rootSum=root->data;     //store value of root

    root->data=LSum+RSum;         //change value of root

    return rootSum+LSum+RSum;       //return sum of all three root leftsubtree and rightsubtree sum


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
    node* root=new node(10);


    node* n1=new node(-2);
    node* n2=new node(6);
    node* n3=new node(8);
    node* n4=new node(-4);
    node* n5=new node(7);
    node* n6=new node(5);


    root->left=n1;
    root->right=n2;

    n1->left=n3;
    n1->right=n4;

    n2->left=n5;
    n2->right=n6;

    cout<<"Binary tree: ";
  inorder(root);
  cout<<endl;

   bToST(root);
    cout<<"Sum tree: ";
  inorder(root);






}




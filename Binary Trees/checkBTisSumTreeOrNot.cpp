


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





int isSumTree(node* root,int &ans)
{
    if(root==NULL)
    {
        return 0;
    }


    //don't check leaf node
    if(root->left==NULL && root->right==NULL)
    {
        return root->data;
    }

    int LSum= isSumTree(root->left,ans);
    int RSum= isSumTree(root->right,ans);
    if(LSum+RSum !=root->data)
    {
        ans=0;   //if root value is not equal to the sum of its left and right subtree it is not sum tree
    }

    return LSum+RSum+root->data;

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
    node* root=new node(70);


    node* n1=new node(20);
    node* n2=new node(30);
    node* n3=new node(10);
    node* n4=new node(10);



    root->left=n1;
    root->right=n2;

    n1->left=n3;
    n1->right=n4;



    cout<<"Binary tree: ";
  inorder(root);
  cout<<endl;

  int ans=1;  //to check ans

isSumTree(root,ans);

   if(ans)
   {
  cout<<"is sum tree";
   }
   else{
    cout<<"not sum tree";
   }






}





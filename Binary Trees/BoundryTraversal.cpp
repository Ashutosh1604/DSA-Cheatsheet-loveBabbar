
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


//to store left sub tree
void leftTree(node* root,vector<int> &ans)
{

    if(root==NULL)
    {
        return;
    }

    //first go to left store it if exist
    if(root->left!=NULL)
    {
        ans.push_back(root->data);
        leftTree(root->left,ans);
    }
    else if(root->right!=NULL)    //if left do not exist go to right and store it
    {
        ans.push_back(root->data);
        leftTree(root->right,ans);
    }
}


//to store leaf nodes
void leaf(node* root,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }

    leaf(root->left,ans);   //first go to bottom left
    if(root->left==NULL && root->right==NULL)  //store leaf node
    {
        ans.push_back(root->data);
    }
    leaf(root->right,ans);     //than go to right


}

void rightTree(node* root,vector<int> &ans)
{

    if(root==NULL)
    {
        return;
    }

    if(root->right!=NULL)   //first go to the right bottom and than start storing
    {
        rightTree(root->right,ans);
        ans.push_back(root->data);
    }
    else if(root->left!=NULL)      //if right does not exist go to left bottom and start printing
    {
        rightTree(root->left,ans);
        ans.push_back(root->data);
    }
}


void boundryTraversal(node* root)
{

vector<int> ans;   //to store traversal
ans.push_back(root->data);  //store root
leftTree(root->left,ans);     //store all left subtree
leaf(root,ans);    //store leaf nodes
rightTree(root->right,ans);   //store all right subtree


for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
}

int main()
{
    node* root=new node(8);

    node* n1=new node(3);
    node* n2=new node(10);
    node* n3=new node(1);
    node* n4=new node(6);
    node* n5=new node(14);
    node* n6=new node(4);
    node* n7=new node(7);
    node* n8=new node(13);

    root->left=n1;
    root->right=n2;

    n1->left=n3;

    n2->left=n4;
    n2->right=n5;

    n4->left=n6;
    n4->right=n7;

    n5->left=n8;


      boundryTraversal(root);
}




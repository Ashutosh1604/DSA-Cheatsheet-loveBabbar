#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node*  left;
    node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

/*
//1st approach
//TC:-O(n^2)
int calcHeight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int LHeight=calcHeight(root->left);
    int RHeight=calcHeight(root->right);

    return max(LHeight,RHeight)+1;
}

bool isBalanced(node* root)
{
    if(root==NULL)
    {
        return true;
    }

    if(isBalanced(root->left)==false)
    {
        return false;
    }

    if(isBalanced(root->right)==false)
    {

        return false;
    }

    int LHeight=calcHeight(root->left);
    int RHeight=calcHeight(root->right);
    if(abs(LHeight-RHeight)<=1)
    {
        return true;
    }
    else{
        return false;
    }
}
*/


//2nd approach
//TC:-O(n)
int isBalanced(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int lh=isBalanced(root->left);
    int rh=isBalanced(root->right);


    if(lh==-1 || rh==-1)
    {
    return -1;
    }

    if(abs(lh-rh)>1)
    {
        return -1;
    }

    return max(lh,rh)+1;
}
int main()
{
    node *root=new node(1);

    node* n1=new node(2);
    node* n2=new node(3);
    node* n3=new node(4);
    node* n4=new node(5);


    root->left=n1;
    root->right=n2;

    n1->left=n3;
    n1->right=n4;

    if(isBalanced(root))
    {
        cout<<"the binary tree is balanced";
    }
    else{
        cout<<"not balanced";
    }


}


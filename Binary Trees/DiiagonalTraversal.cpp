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


void diagonalTraversal(node* root)
{
    if(root==NULL)
     {
         return;
     }

    queue<node*> q; //to store next diagonal
    q.push(root);

    while(!q.empty())
    {
        node* curr=q.front();   //start curr form root
        q.pop();

        while(curr!=NULL)   //till it do not reach to the end of diagonal
        {
            if(curr->left!=NULL)     //if their exist left node store it in queue as it is the next diagonal
            {
                q.push(curr->left);
            }
                cout<<curr->data<<" ";    //print current node
                curr=curr->right;          //keep moving right
        }
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


      diagonalTraversal(root);
}




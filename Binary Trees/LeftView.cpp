

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



void leftView(node* root)
{
    if(root==NULL)
    {
        return;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        int n=q.size();

        for(int i=1;i<=n;i++)
        {
            node* curr=q.front();
            q.pop();

            if(i==1)
            {
                cout<<curr->data<<" ";
            }

            if(curr->left!= NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);

            }
        }
    }



}



int main()
{
    node *root=new node(1);

    node* n1=new node(2);
    node* n2=new node(3);
    node* n3=new node(4);
    node* n4=new node(5);
    node* n5=new node(6);
    node* n6=new node(7);


    root->left=n1;
    root->right=n2;

    n1->left=n3;

    n2->left=n4;
    n2->right=n5;

    n4->left=n6;

 leftView(root);


}

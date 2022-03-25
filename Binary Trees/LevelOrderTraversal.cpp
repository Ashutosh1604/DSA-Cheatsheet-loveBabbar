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


void LevelOrderTraversal(node* root)
{

    if(root==NULL)
    {
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
      node* n=q.front();
      q.pop();

      if(n!=NULL)
      {
          cout<<n->data<<" ";

          if(n->left!=NULL)
          {
              q.push(n->left);
          }


          if(n->right!=NULL)
          {
              q.push(n->right);
          }


        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }

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

LevelOrderTraversal(root);

}


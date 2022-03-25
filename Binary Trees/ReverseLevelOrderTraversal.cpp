#include<bits/stdc++.h>
#include<queue>
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



void ReverseLevelOrderTraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    vector<int> ans;
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* n=q.front();
        ans.push_back(n->data);
        q.pop();

        if(n->right!=NULL)
        {
            q.push(n->right);
        }


        if(n->left!=NULL)
        {
            q.push(n->left);
        }

    }

    reverse(ans.begin(),ans.end());


    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
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


//Traversal function call
    ReverseLevelOrderTraversal(root);
}

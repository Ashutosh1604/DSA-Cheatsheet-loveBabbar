#include<iostream>
#include<queue>
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

int HeightOfTree(node *root)
{
    if(root==NULL)
    {
        return 0;

    }

    int LHeight=HeightOfTree(root->left);
    int RHeight=HeightOfTree(root->right);

    return max(LHeight,RHeight) + 1;
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
    n3->left=n4;



 cout<<"Height of tree is: "<<HeightOfTree(root);
}

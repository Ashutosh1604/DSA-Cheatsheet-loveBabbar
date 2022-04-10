#include<iostream>
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


//to find the position of curr element in inorder
int searchPos(int inorder[],int start,int end,int curr)
{

    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}


node* buildTree(int preorder[],int inorder[],int start,int end)
{
    static int idx=0;   //for traversing preorder
    if(start>end)      //base condition if inorder is empty return NULL
    {
        return NULL;
    }

    int curr=preorder[idx];  //store current element of preorder in curr
    idx++;   //move to next element

    node* n=new node(curr);   //create node for curr
    if(start==end)    //if there is only one element in inorder return the node
    {
    return n;
    }
    int pos=searchPos(inorder,start,end,curr);    //get the position of curr element in inorder
    n->left=buildTree(preorder,inorder,start,pos-1);    //build the left subtree of curr element
    n->right=buildTree(preorder,inorder,pos+1,end);    //build right subtree of that curr element

   return n;
}



//for inorder traversal
void inorderPrint(node* root)
{

if(root==NULL)
{
    return;
}
inorderPrint(root->left);
cout<<root->data<<" ";
inorderPrint(root->right);

}

int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    node* root=buildTree(preorder,inorder,0,4);
    inorderPrint(root);


}


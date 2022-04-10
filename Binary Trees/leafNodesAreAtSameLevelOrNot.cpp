



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



void check(node* root,int h,int &maxHeight,int &ans)
{

    if(root==NULL)
    {
        return ;
    }

    if(root->left==NULL && root->right==NULL) //if it is leaf node
    {
        if(maxHeight==-1)   //check if it is 1st leaf node
        {
            maxHeight=h;     //set the max height as height of 1st leaf node
        }
        else{
            if(h!=maxHeight)       //if any other leaf node height is not equal to the max height set ans as 0
            {
                ans=0;
            }
        }


    }

    check(root->left,h+1,maxHeight,ans);
    check(root->right,h+1,maxHeight,ans);


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


int check(node* root)
{

}

int main()
{
    node* root=new node(10);


    node* n1=new node(20);
    node* n2=new node(30);
    node* n3=new node(10);
    node* n4=new node(15);
    node* n5=new node(12);
    node* n6=new node(30);



    root->left=n1;
    root->right=n2;

    n1->left=n3;
    n1->right=n4;

     n2->left=n5;
    n2->right=n6;


    cout<<"Binary tree: ";
  inorder(root);
  cout<<endl;


  int h=0;  //to count the height of leaf
  int maxHeight=-1;   //to store max height of leaf


  int ans=1;  //to store ans

  check(root,h,maxHeight,ans);

   if(ans)
   {
  cout<<"at same level";
   }
   else{
    cout<<"not at same level";
   }



}





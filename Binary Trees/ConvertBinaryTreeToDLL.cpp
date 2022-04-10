

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


node* bToDLL(node* root,node* &head,node* &prev)
{
    if(root==NULL)
    {
        return root;
    }

    bToDLL(root->left,head,prev);    //go to left bottom

    if(head==NULL)        //if it is 1st element
    {

        head=root;          //point head to it
        prev=root;          //point prev to it
    }
    else{                     //if it is not first element
        prev->right=root;     //connect it to right of prev
        prev->right->left=prev; //and point prev as its left
        prev=prev->right;       //and make it prev
    }


    bToDLL(root->right,head,prev);         //than traverse right subtree


    return head;                 //return head at last

}


//to display DLL
void display(node* head)
{

    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<endl;
}


int main()
{
    node* root=new node(10);


    node* n1=new node(12);
    node* n2=new node(15);
    node* n3=new node(25);
    node* n4=new node(30);
    node* n5=new node(36);


    root->left=n1;
    root->right=n2;

    n1->left=n3;
    n1->right=n4;

    n2->left=n5;


      node* head=NULL;   //for head of DLL
      node* prev=NULL;   //to point prev element

    node* newHead= bToDLL(root,head,prev);



      display(newHead);


}




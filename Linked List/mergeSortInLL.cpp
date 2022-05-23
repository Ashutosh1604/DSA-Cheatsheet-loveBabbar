#include<bits/stdc++.h>
using namespace std;

class node{
    public:
int data;
node* next;

node(int val)
{
    data=val;
    next=NULL;
}

};




void InsertAtEnd(node* &head,int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }

    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=n;

}


node* findMid(node* head)
{
  node* slow=head;
node* fast=head;

while(fast->next!=NULL && fast->next->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
}

 return slow;
}


node* Merge(node* left,node* right)
{
    if(left==NULL)
    {
        return right;
    }

    if(right==NULL)
    {
        return left;
    }

    node* dummy=new node(-1);

    node* temp=dummy;

    while(left!=NULL && right!=NULL)
    {
        if(left->data < right->data)
        {
            temp->next=left;
            temp=temp->next;
            left=left->next;
        }
        else
        {
            temp->next=right;
            temp=temp->next;
            right=right->next;
        }
    }


    while(left!=NULL)
    {
          temp->next=left;
            temp=temp->next;
            left=left->next;
    }

    while(right!=NULL)
    {
          temp->next=right;
            temp=temp->next;
            right=right->next;
    }

    return dummy->next;
}

node* mergeSort(node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node* mid = findMid(head);


    node* left=head;
    node* right=mid->next;

    mid->next=NULL;

    left=mergeSort(left);
    right=mergeSort(right);

    node* result=Merge(left,right);


    return result;
}



void display(node* head)
{

    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
  node* head=NULL;

    InsertAtEnd(head,1);
    InsertAtEnd(head,5);
    InsertAtEnd(head,6);
    InsertAtEnd(head,4);
    InsertAtEnd(head,3);
    InsertAtEnd(head,2);

    display(head);
    node* new_head=mergeSort(head);

    display(new_head);


}

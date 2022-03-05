#include<iostream>
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

    while(temp->next!=NULL){
       temp=temp->next;
    }
    temp->next=n;

}

node* reverseKNodes(node* &head,int k)
{
    node* prev=NULL;
    node* curr=head;
    node* nxt;

    int cnt=0;

    while(curr!=NULL && cnt!=k)
    {
        nxt=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nxt;

        cnt++;
    }

    if(curr!=NULL)
    {
        head->next=reverseKNodes(curr,k);
    }

    return prev;
}

void display(node* head)
{
    node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;

InsertAtEnd(head,1);
InsertAtEnd(head,2);
InsertAtEnd(head,3);
InsertAtEnd(head,4);
InsertAtEnd(head,5);
InsertAtEnd(head,6);
display(head);
node* newhead=reverseKNodes(head,2);
display(newhead);
}

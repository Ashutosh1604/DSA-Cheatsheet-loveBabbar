#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtEnd(node* &head,int val)
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

//reverse by iteration
node* reverseByItr(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* nxt;

    while(curr!=NULL)
    {
        nxt=curr->next;

        curr->next=prev;
        prev=curr;
        curr=nxt;
    }

    return prev;

}


//reverse by recursion

node* reverseByRec(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead=reverseByRec(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;

}

void display(node* &head)
{
    node* temp=head;

    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;

    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);

    display(head);
    //node* newhead=reverseByItr(head);
    node* newhead=reverseByRec(head);
    display(newhead);

}

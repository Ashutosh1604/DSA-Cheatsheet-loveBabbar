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

void middle(node* &head)
{
node* slow=head;
node* fast=head;

while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
}

cout<<"middle element is: "<<slow->data<<endl;
}







int main()
{
node* head;

    InsertAtEnd(head,1);
    InsertAtEnd(head,2);
    InsertAtEnd(head,3);
    InsertAtEnd(head,4);
    InsertAtEnd(head,5);


    middle(head);
}

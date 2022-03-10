
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
    n->next=n;
      head=n;
    return;

}
    node*temp=head;

    while(temp->next!=head)
    {
     temp=temp->next;
    }

    temp->next=n;
    n->next=head;


}




void split(node* head ,node **head1,node **head2)
{
    //find mid
    node* slow=head;
    node* fast=head->next;

    while(fast!=head && fast->next!=head)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    *head1=head;    //point head1 to the head
    *head2=slow->next;    //point head2 to the next of mid
    slow->next=*head1;         //connect last node to first in 1st LL

    node* temp=*head2;        //to make 2nd LL circular take a temp and start from head2

    while(temp->next!=head)      //go to last
    {
        temp=temp->next;
    }

    temp->next=*head2;        //connect it to head 2
}




void display(node* head)
{
    node* temp=head;

  do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }  while(temp!=head);

    cout<<endl;
}




int main()
{
node* head;
node* head1;
node* head2;

    InsertAtEnd(head,11);
    InsertAtEnd(head,2);
    InsertAtEnd(head,56);
    InsertAtEnd(head,12);


cout<<"Orignal linked list"<<endl;
display(head);

split(head,&head1,&head2);

cout<<"first circular linked list"<<endl;
display(head1);

cout<<"second circular linked list"<<endl;
display(head2);
}


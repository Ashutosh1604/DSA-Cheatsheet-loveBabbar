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


node* LastToFirst(node* &head)
{

    node* SecLast=head;       //for second last element
    node* last=SecLast->next;   //for last element

    while(last->next!=NULL)
    {
        last=last->next;
        SecLast=SecLast->next;

    }
    SecLast->next=NULL;   //make second last element last in the ll
    last->next=head;        //make last element first in the ll
    head=last;        //update head;

    return head;
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



int main(){

node* head=NULL;

InsertAtEnd(head,1);
InsertAtEnd(head,2);
InsertAtEnd(head,3);
InsertAtEnd(head,4);
InsertAtEnd(head,5);

display(head);
node* newhead=LastToFirst(head);
display(head);
}


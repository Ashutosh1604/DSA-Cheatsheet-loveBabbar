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

void deleteAlternate(node* &head)
{
    node* temp=head;
    node* todelete;
     while(temp->next!=NULL && temp!=NULL)
     {
         todelete=temp->next;
         temp->next=todelete->next;

         free(todelete);

         temp=temp->next;
     }
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
InsertAtEnd(head,6);
display(head);
deleteAlternate(head);
display(head);

}



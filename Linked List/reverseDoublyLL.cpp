#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* prev;
node* next;

node(int val)
{
    data=val;
    prev=NULL;
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
    n->prev=temp;

}

//reverse doubly LL
node* reverseDoublyLL(node* head)
{
    node* curr=head;
    node* temp;
    if(curr==NULL || curr->next==NULL)
    {
        return curr;
    }

    while(curr!=NULL)
    {
        temp=curr->prev; //store value of curr previous element in temp

        //exchanging pointers
        curr->prev=curr->next;    //connect curr prev pointer to its next element
        curr->next=temp;     //and connect its next pointer to its previous element


        curr=curr->prev; //move curr forward
    }

    return temp->prev; //temp was in second last
}




display(node* head)
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
 InsertAtEnd(head,4);
 InsertAtEnd(head,6);
 InsertAtEnd(head,9);
 InsertAtEnd(head,5);
 InsertAtEnd(head,2);

 display(head);

node* newHead=reverseDoublyLL(head);

display(newHead);



}







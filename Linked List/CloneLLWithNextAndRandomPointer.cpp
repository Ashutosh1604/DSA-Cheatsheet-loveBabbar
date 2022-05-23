#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* arb;

    node(int val)
    {
        data=val;
        next=NULL;
        arb=NULL;
    }
};

void insertAtLast(node* &head,int val)
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

void arbitary(node* &head,int f,int t)
{
    node* from;
    node* to;

    node* curr=head;
    while(curr!=NULL)
    {
        if(curr->data==f)
        {
            curr=from;
        }

        if(curr->data==t)
        {
        curr=to;
        }

        from->arb=to;
    }
}

node* cloneLL(node* head)
{
    node* curr=head;
    node* temp;

//creating dublicate nodes and connecting them in between
    while(curr!=NULL)
    {
        temp=curr->next;
        curr->next=new node(curr->data);
        curr->next->next=temp;
        curr=temp;
    }

    curr=head;

    //setting arbitary pointers
    while(curr!=NULL)
    {
        curr->next->arb=curr->arb?curr->arb->next : curr->arb;
    }

    node* orgnl=head;
    node* cpy=head->next;

    temp=cpy;
    while(orgnl!=NULL && cpy!=NULL)
    {
        orgnl->next=orgnl->next->next;
        cpy->next=cpy->next?cpy->next->next : cpy->next;
        orgnl=orgnl->next;
        cpy=cpy->next;
    }

    return temp;
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

    insertAtLast(head,1);
    insertAtLast(head,2);
    insertAtLast(head,3);
    insertAtLast(head,4);

    arbitary(head,1,3);
    arbitary(head,2,1);
    arbitary(head,3,4);
    arbitary(head,4,2);
    display(head);
    node* new_head=cloneLL(head);
   display(new_head);


}

/*
create even ll and odd ll separately and the join even next to odd
*/
#include<bits/stdc++.h>
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


node* segregate(node* &head)
{
node* even=NULL;  //to point even ll start
node* odd=NULL;       //to point odd ll start
node* e=NULL;          //to point even ll end
node* o=NULL;           //to point odd ll end

while(head!=NULL)   //traverse ll
{
    if(head->data%2==0)   //if it is even
    {
        if(even==NULL)    //if it is first even store in even pointer and also in e ll
        {
            even=head;
            e=head;
        }
        else                //if not first than just add in e ll
        {
            e->next=head;
            e=e->next;
        }
    }
    else
    {
        if(odd==NULL)           //if it is first odd store in odd pointer and also in o ll
        {
            odd=head;
            o=head;
        }
        else{                    //if not first than just add in o ll
            o->next=head;
            o=o->next;
        }
    }

    head=head->next;
}

if(e)     //if e ll exist join its next to o ll
{
    e->next=odd;
}
if(o)    // if o ll exist joint its next to NULL
{
    o->next=NULL;
}
if(even)   //if even exist return it and if it do not exist return odd
{
    return even;
}
else
{
    return odd;
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

int main()
{
    node* head=NULL;

    insertAtLast(head,17);
    insertAtLast(head,15);
    insertAtLast(head,8);
    insertAtLast(head,9);
    insertAtLast(head,2);
    insertAtLast(head,4);
    insertAtLast(head,6);
    display(head);
    node* new_head=segregate(head);
    display(new_head);


}

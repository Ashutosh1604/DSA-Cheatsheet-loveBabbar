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

//Make cycle
void makeCycle(node* &head,int pos)
{
    node* temp=head;
    node* StartCycle;

    int cnt=1;

    while(temp->next!=NULL)
    {
        if(cnt==pos)
        {
            StartCycle=temp;
        }
        temp=temp->next;
        cnt++;
    }
    temp->next=StartCycle;

}

//detect Cycle
bool detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            return true;
        }

    }
    return false;


}


//deleteCycle
void deleteCycle(node* &head)
{
    node* slow=head;
    node* fast=head;

    do{
        slow=slow->next;
        fast=fast->next->next;

    }while(slow!=fast);

    fast=head;

    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;

    }
    cout<<"cycle is starting from node with value "<<slow->next->data<<endl;
    slow->next=NULL;
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
    InsertAtEnd(head,7);

    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    deleteCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);

}

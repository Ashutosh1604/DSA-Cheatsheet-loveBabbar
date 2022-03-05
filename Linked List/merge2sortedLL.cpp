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

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}

node* Merge(node* &head1,node* &head2)
{
    node* p1=head1;
    node* p2=head2;
    node* dummyNode=new node(-1);

    node* p3=dummyNode;

    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else{

            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

     while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dummyNode->next;

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
    node* head1=NULL;
    node* head2=NULL;

    InsertAtEnd(head1,1);
    InsertAtEnd(head1,4);
    InsertAtEnd(head1,5);
    InsertAtEnd(head1,7);
    InsertAtEnd(head2,2);
    InsertAtEnd(head2,3);
    InsertAtEnd(head2,6);
    display(head1);
    display(head2);
    node* newhead=Merge(head1,head2);
    display(newhead);


}

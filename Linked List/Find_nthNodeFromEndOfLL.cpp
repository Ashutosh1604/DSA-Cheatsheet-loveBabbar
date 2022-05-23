/*

1. initialize the pointers 's'&'f' to head
2. move forward the 'f' pointer by 'n-1' position
3. move forward both by 1 pass till (f->next==null)
4. pointer 's' point the nth node from last

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


node* nthNodeFromEnd(node* head,int n)
{
    node* s=head;
    node* f=head;

    int cnt=1;
    while(cnt<=n-1)
    {
        f=f->next;
        cnt=cnt+1;
    }

    while(f->next!=NULL)
    {
        s=s->next;
        f=f->next;
    }


    return s;
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
    insertAtLast(head,5);
    insertAtLast(head,6);
    display(head);
    node* ans=nthNodeFromEnd(head,2);
   cout<<"nth node from last is: "<<ans->data;

}

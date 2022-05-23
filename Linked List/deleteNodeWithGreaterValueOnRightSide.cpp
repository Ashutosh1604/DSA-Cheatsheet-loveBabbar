/*
1. reverse ll
2. store 1st element as max
3. if we find node with value less than max delete it
4. if we find value more than max update max

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


node* reversell(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* nxt;

    while(curr!=NULL)
    {
        nxt=curr->next;

        curr->next=prev;
        prev=curr;
        curr=nxt;
    }

    return prev;

}

node* deleteNodeWithGreaterRight(node* head)
{
  head=reversell(head);

  node* prev=head;
  node* curr=head->next;

  int ma=head->data;
  while(curr!=NULL)
  {
      if(curr->data>=ma)
      {
          ma=curr->data;
          prev=curr;
          curr=curr->next;
      }
      else{
        prev->next=curr->next;
        curr=prev->next;
      }
  }

  head=reversell(head);

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

int main()
{
    node* head=NULL;

    insertAtLast(head,12);
    insertAtLast(head,15);
    insertAtLast(head,10);
    insertAtLast(head,11);
    insertAtLast(head,5);
    insertAtLast(head,6);
    insertAtLast(head,2);
    insertAtLast(head,3);
    display(head);
    node* new_head=deleteNodeWithGreaterRight(head);
    display(new_head);


}

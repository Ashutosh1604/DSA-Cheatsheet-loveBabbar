//data replacement not allowed

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


void insertAtTail(node* &tail,node* curr)
{
    tail->next=curr;
    tail=curr;
}
node* sortLL(node* head)
{
  node* head0=new node(-1);
  node* tail0=head0;
  node* head1=new node(-1);
  node* tail1=head1;
  node* head2=new node(-1);
  node* tail2=head2;

  node* curr=head;

  //creating separe list for 0,1 and 2
  while(curr!=NULL)
  {
      if(curr->data==0)
      {
          insertAtTail(tail0,curr);
      }
      else if(curr->data==1)
      {
          insertAtTail(tail1,curr);
      }
      else
      {
          insertAtTail(tail2,curr);

      }
      curr=curr->next;
  }

  //merging three sublist

  if(head1->next!=NULL)    //if 1's list is not empty then only we can connect o's list with it
  {
      tail0->next=head1->next;
  }
  else{
    tail0->next=head2->next;
  }

  tail1->next=head2->next;
  tail2->next=NULL;

  //setup head
  head=head0->next;

  //deleting dummy nodes
  delete head0;
  delete head1;
  delete head2;



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

    insertAtLast(head,2);
    insertAtLast(head,1);
    insertAtLast(head,2);
    insertAtLast(head,0);
    insertAtLast(head,0);
    insertAtLast(head,1);
    display(head);
    node* new_head=sortLL(head);
    display(new_head);

}


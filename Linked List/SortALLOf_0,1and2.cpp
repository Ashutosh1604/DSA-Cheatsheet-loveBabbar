//data replacement is allowed
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



node* sortLL(node* head)
{
  int cnt0=0;
  int cnt1=0;
  int cnt2=0;

  node* temp=head;
  while(temp!=NULL)
  {
      if(temp->data==0)
      {
          cnt0++;
      }
      else if(temp->data==1)
      {
          cnt1++;
      }
      else{
        cnt2++;
      }

      temp=temp->next;
  }

  temp=head;

  while(temp!=NULL)
  {
      if(cnt0!=0)
      {
          temp->data=0;
          cnt0--;
      }
      else if(cnt1!=0)
      {
          temp->data=1;
          cnt1--;
      }
      else if(cnt2!=0)
      {
          temp->data=2;
          cnt2--;
      }

      temp=temp->next;
  }


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

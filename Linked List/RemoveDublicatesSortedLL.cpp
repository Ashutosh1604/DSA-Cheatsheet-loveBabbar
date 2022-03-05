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

 void removeDub(node* &head)
 {
  node* p=head;    //to traverse all elements
  node* q;

  while(p!=NULL && p->next!=NULL)  //if element is not a last element
  {
      if(p->data == p->next->data)      //if element is  equal to its next element
      {
          q=p->next->next;                 //put q next to its duplicate
          if(q==NULL)                      //if q is now to the NULL connect p to NULL
          {
              p->next=NULL;
              return;
          }
          p->next=q;                          //if q is a element connect p to q duplicate will be removed
      }
     else
      {
          p=p->next;                       //if next element was not a duplicate simply increment p
      }
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

    insertAtLast(head,1);
    insertAtLast(head,2);
    insertAtLast(head,2);
    insertAtLast(head,4);
    insertAtLast(head,4);
    insertAtLast(head,5);
    display(head);
    removeDub(head);
    display(head);

}

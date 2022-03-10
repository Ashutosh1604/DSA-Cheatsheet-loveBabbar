
#include<bits/stdc++.h>
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
if(head==NULL)
    node* n=new node(val);
{
    n->next=n;
      head=n;
    return;

}
    node*temp=head;

    while(temp->next!=head)
    {
     temp=temp->next;
    }

    temp->next=n;
    n->next=head;


}


bool isCircular(node* &head)
{

    if(head==NULL)
    {
        return true;   //empty LL is circular
    }

    node* temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            break;
        }
    }


    if(temp==NULL)
    {
        return false;
    }
    else
    {
        return true;
    }


}






int main()
{
node* head;

    InsertAtEnd(head,1);
    InsertAtEnd(head,2);
    InsertAtEnd(head,3);
    InsertAtEnd(head,4);
    InsertAtEnd(head,5);


    if(isCircular(head))
    {
        cout<<"linked list is circular";
    }
    else{

        cout<<"Linked list is not circular";
    }
}

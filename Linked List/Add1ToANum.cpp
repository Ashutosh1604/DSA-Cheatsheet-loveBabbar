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


//to reverse LL
node* reverseLL(node* &head)
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



node* Add1ToNum(node* head)
{
    node* newHead=reverseLL(head); //reverse the number

    node* curr=newHead;     //to traverse all the number
    node* prev=NULL;

    int carry=0;        //carry generated

    while(curr!=NULL)     //traverse all the no.
    {
        int sum=0;          //for taking sum
        if(prev==NULL)          //if its the first number add 1 to it
        {
            sum=curr->data + 1;

        }
        else           //if it is not the first number add carry to it
        {
            sum=curr->data + carry;
        }

        carry=sum/10;       //take out carry by division of sum by 10

        curr->data=sum%10;    //update current element with the mod of sum
        prev=curr;            //update prev now
        curr=curr->next;         //update current
    }

    if(carry==1)                   //after completing the sum if carry is remaining create a new node and insert at the end
    {
        node* new_node=new node(1);
        prev->next=new_node;
    }

   return reverseLL(newHead);      //again reverse the LL and return its head

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

    InsertAtEnd(head,9);
    InsertAtEnd(head,9);
    InsertAtEnd(head,9);

    display(head);

    node* new_head=Add1ToNum(head);

    display(new_head);

}


#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next=NULL;

    node(int val)
    {
        data=val;
        next=NULL;
    }

};


void InsertAtEnd(node* &head,int val)
{
    struct node *n=new node(val);
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



//to reverse ll
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


//to find length of ll
int length(node* &head)
{
    node* temp=head;
    int l=0;

    while(temp!=NULL)
    {
        temp=temp->next;
        l++;
    }

    return l;
}


//adding both num
node* addTwoNumbers(node* head1,node* head2)
{


      if(length(head1) < length(head2))  //we take long LL as head1
    {
        node* temp=head1;
        head1=head2;
        head2=temp;
    }

    node* fRev=reverseLL(head1);   //reverse both LL
    node* sRev=reverseLL(head2);

    node* f=fRev;       //pointing both first and second LL with f and s pointer
    node* s=sRev;







    node* prev=NULL;  //for adding last carry in node if generated

    int carry=0;    //for carry

     while(f!=NULL || s!=NULL)   //will run till both of them are not NULL
     {

         int sum=0;   //for keeping sum of data
         int fd=f->data,sd=s->data;    //to store data of both LL


         if(s==NULL) //if second LL get finished take its data as 0
         {
             sd=0;
         }

        sum=fd + sd + carry;   //sum of current data
         carry=sum/10;    //calculate carry
         f->data=sum%10;    //update first LL as our ans LL

         prev=f;    //update prev pointer to current value

         f=f->next;   //update current value of first LL

         if(s!=NULL)   //update current value of second LL if it has not finished
         {
             s=s->next;
         }
     }

     if(carry==1)          //if their is a carry left after the sum of last digits of both the LL create a new node and store value in it
     {
          node* new_node=new node(1);
        prev->next=new_node;
     }

     return reverseLL(fRev);   //at last reverse the first LL(as sum is stored in it ) and return its head;

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

    InsertAtEnd(head1,9);
    InsertAtEnd(head1,9);
    InsertAtEnd(head1,9);
    InsertAtEnd(head2,3);
    InsertAtEnd(head2,6);
    InsertAtEnd(head2,1);


    display(head1);
    display(head2);
    node *sum_head=addTwoNumbers(head1,head2);
    display(sum_head);

}

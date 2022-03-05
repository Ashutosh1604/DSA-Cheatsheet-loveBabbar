//by-ASHUTOSH DHYANI
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

    while(temp->next!=NULL){
       temp=temp->next;
    }
    temp->next=n;

}


//to intersect two LL
void intersect(node* &head1,node* &head2,int pos)
{
    node* temp1=head1;  // for LL 1
    int count=1;  //to count position
    while(temp1!=NULL && count!=pos)         //taking pointer to position at LL 1
    {
        temp1=temp1->next;
        count++;
    }
    node* temp2=head2;   //for LL 2
    while(temp2->next!=NULL)   //take pointer to last of LL2
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;  //join LL2 end to the position given
}



//to find length of LL
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



//to find intersection point of LL
int intersectionCheck(node* head1,node* head2)
{
     int l1=length(head1);  //find length if LL 1
     int l2=length(head2);    //find length of LL 2

     int d=0;  //to find the extra node in larger LL
     node* ptr1;
     node* ptr2;

     if(l1>l2)   //if LL 1 is larger
     {
         d=l1-l2;   //find difference
         ptr1=head1;    //put ptr1 to larger LL
         ptr2=head2;
     }
     else   //if LL 2 is large
     {
         d=l2-l1;    //find difference
         ptr1=head2;   //put ptr1 to larger LL
         ptr2=head1;
     }

     int count=0;
     while(ptr1!=NULL && count!=d)  //traversing the extra node that larger LL is having
     {
         ptr1=ptr1->next;
         count++;
     }

     //now pointer of both LL are at same level
     while(ptr1!=NULL && ptr2!=NULL)
     {
         if(ptr1==ptr2)     //if pointers intersect at any point
         {
             return ptr1->data;  //return its data
         }
         ptr1=ptr1->next;   //else move pointers
         ptr2=ptr2->next;
     }
     return -1;

}


//to display LL
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





int main(){

node* head1=NULL;
node* head2=NULL;

InsertAtEnd(head1,1);
InsertAtEnd(head1,2);
InsertAtEnd(head1,3);
InsertAtEnd(head1,4);
InsertAtEnd(head1,5);
InsertAtEnd(head1,6);
InsertAtEnd(head2,9);
InsertAtEnd(head2,10);
intersect(head1,head2,5);
display(head1);
display(head2);
cout<<"intersection point is: "<<intersectionCheck(head1,head2)<<endl;
}


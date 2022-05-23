#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* prev;
node* next;

node(int val)
{
    data=val;
    prev=NULL;
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
    n->prev=temp;

}




//pair sum
void pairSum(node* head,int sum)
{
    node* first=head;  //pointer 1
    node* last=head;    //pointer 2

    while(last->next!=NULL)  //2nd pointer will start from last
    {
        last=last->next;
    }



    bool flag=false;    //to track if pairs are found

    while(first!=last && last->next!=first)   //till first is not equal to last and first do not cross last
    {

        if((first->data + last->data) == sum)  //if pair is found
        {
            flag=true;      //mark flag true
            cout<<first->data<<" "<<last->data<<endl;   //print the pair

            first=first->next;    //move first forward

            last=last->prev;      //move last backward
        }
        else if((first->data + last->data) < sum)    //if sum is smaller than target sum
        {
            first=first->next;         //move first forward as LL is sorted
        }
        else{
            last=last->prev;            //move last backward if sum is greater than target sum as we want smaller value
        }
    }

    if(flag==false)
    {

        cout<<"no pair found"<<endl;     //print not found if flag remains false
    }
}







display(node* head)
{

    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}





int main()
{
    node* head=NULL;

 InsertAtEnd(head,1);
 InsertAtEnd(head,2);
 InsertAtEnd(head,4);
 InsertAtEnd(head,5);
 InsertAtEnd(head,6);
 InsertAtEnd(head,8);
 InsertAtEnd(head,9);

 int sum=7;

 display(head);

 pairSum(head,sum);



}







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


 void removeDub(node* &head)
 {
 unordered_map<int,int> mp;      //take a map

 node* curr=head;          //to traverse the ll
 node* prev=NULL;

 while(curr!=NULL)        //we traverse all the elements
 {
     if(mp.find(curr->data)!=mp.end())    //if it is already present connect its previous element to its next element and delete current element
     {
         prev->next=curr->next;
         delete(curr);
     }
     else{                            //if it is not present add it to map with value 1 and update prev

        mp[curr->data]=1;
        prev=curr;
     }

     curr=prev->next;           //increment curr all the time
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

    insertAtLast(head,2);
    insertAtLast(head,3);
    insertAtLast(head,7);
    insertAtLast(head,2);
    insertAtLast(head,3);
    insertAtLast(head,5);
    display(head);
    removeDub(head);
    display(head);


}

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



int countPairs(node* first, node* second, int value)
{
    int count = 0;

    // The loop terminates when either of two pointers
    // become NULL, or they cross each other (second->next
    // == first), or they become same (first == second)
    while (first != NULL && second != NULL &&
           first != second && second->next != first) {

        // pair found
        if ((first->data + second->data) == value) {

            // increment count
            count++;

            // move first in forward direction
            first = first->next;

            // move second in backward direction
            second = second->prev;
        }

        // if sum is greater than 'value'
        // move second in backward direction
        else if ((first->data + second->data) > value)
            second = second->prev;

        // else move first in forward direction
        else
            first = first->next;
    }

    // required count of pairs
    return count;
}

// function to count triplets in a sorted doubly linked list
// whose sum is equal to a given value 'x'
int countTriplets(node* head, int x)
{
    // if list is empty
    if (head == NULL)
        return 0;

    node* current, *first, *last;
    int count = 0;

    // get pointer to the last node of
    // the doubly linked list
    last = head;
    while (last->next != NULL)
        last = last->next;

    // traversing the doubly linked list
    for (current = head; current != NULL; current = current->next) {

        // for each current node
        first = current->next;

        // count pairs with sum(x - current->data) in the range
        // first to last and add it to the 'count' of triplets
        count += countPairs(first, last, x - current->data);
    }

    // required count of triplets
    return count;
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

 int x=17;

 cout << "Count = "
         << countTriplets(head, x);
    return 0;



}











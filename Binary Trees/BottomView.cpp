

#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node*  left;
    node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};



void BottomView(node* root)
{
    if(root==NULL)
    {
        return;
    }

    map<int,int> mp;  //for storing line number and data of the first element of that line
    queue<pair<node* ,int>> q;     //to store node and its line number of all nodes in tree
    q.push({root,0});     //push pair of root and its line number in queue

    while(!q.empty())
    {
    auto itr=q.front();   //itr will contain the first pair
        q.pop();   //pop it from queue

        node* curr=itr.first;    //store node inn curr
        int line=itr.second;    //and line number inn line


            mp[line]=curr->data;      //overwrite the value of line(key)


        if(curr->left !=NULL)
        {
            q.push({curr->left,line-1});    //insert its left with line number in queue
        }

        if(curr->right !=NULL)
       {

           q.push({curr->right,line+1}) ;       //insert its right with line number in queue
       }




    }


    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->second<<" ";
    }


}



int main()
{
    node *root=new node(1);

    node* n1=new node(2);
    node* n2=new node(3);
    node* n3=new node(4);
    node* n4=new node(5);
    node* n5=new node(6);
    node* n6=new node(7);


    root->left=n1;
    root->right=n2;

    n1->left=n3;

    n2->left=n4;
    n2->right=n5;

    n4->left=n6;

 BottomView(root);


}



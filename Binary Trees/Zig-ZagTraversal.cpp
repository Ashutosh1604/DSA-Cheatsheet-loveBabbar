#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};


  void LevelOrderTraversal(node* root)
{
    vector <vector <int>> ans;  //to store zig zag traversal

    if(root==NULL)
    {
        return ;
    }


    queue<node*> q;
    q.push(root);
    bool leftToRight=true;   //flag to track from where to traverse



    while(!q.empty())
    {
        int n=q.size();    //size of one level
        vector<int> temp(n);       //to store one level

        for(int i=0; i<n; i++)
        {
            node* curr=q.front();     //store the 1st element in curr node
            q.pop();

            int idx=(leftToRight)? i: (n-1-i);   //if flag is true index will remain same if not then we will push element at the back of temp vector

            temp[idx]=curr->data;            //push data in vector



            if(curr->left !=NULL)
            {
                q.push(curr->left);    //insert its left node in queue
            }

            if(curr->right !=NULL)
            {

                q.push(curr->right) ;       //insert its right node in queue
            }
        }

        leftToRight=!leftToRight;    //flip the flag
        ans.push_back(temp);    //push the temp vector into ans vector
    }


    //traverse ans vector
   for (auto it: ans)
         {

             for (auto ij: it)
             {

                 cout<<ij<<" ";
             }

         }
}

int main()
{
    node* root=new node(1);

    node* n1=new node(2);
    node* n2=new node(3);
    node* n3=new node(4);
    node* n4=new node(5);

    root->left=n1;
    root->right=n2;

    n1->left=n3;
    n1->right=n4;

    LevelOrderTraversal(root);

}



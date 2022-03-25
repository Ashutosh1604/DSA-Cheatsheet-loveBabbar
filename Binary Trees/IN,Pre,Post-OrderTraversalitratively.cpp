

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


/* * put the root in stack and then take out and print
   * insert its right and the left
   *take out top element print it and then insert its right and then left
*/
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }


    stack<node*> st;
    st.push(root);

    while(!st.empty())
    {
        node* n=st.top();
        st.pop();

        cout<<n->data<<" ";

        if(n->right!=NULL)
        {
            st.push(n->right);
        }

        if(n->left!=NULL)
        {
            st.push(n->left);

        }
    }

}




void inorder(node* root)
{

    stack<node*> st;
    node* curr=root;

    while(true)
    {
         if(curr !=NULL)
         {
             st.push(curr);
             curr=curr->left;

         }
         else
         {
             if(st.empty()==true)
             {
                 break;
             }
             curr=st.top();
             st.pop();

             cout<<curr->data<<" ";
             curr=curr->right;

         }


    }



}


void postorder(node* root)
{
 stack<node*> st;
    node* curr=root;

    while(true)
    {
         if(curr !=NULL)
         {
             st.push(curr);
             curr=curr->left;

         }
         else
         {
             if(st.empty()==true)
             {
                 break;
             }


             curr=curr->right;

              curr=st.top();
             st.pop();
             cout<<curr->data<<" ";

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

    cout<<"Preorder traversal"<<endl;
    preorder(root);
    cout<<endl;


    cout<<"Inorder traversal"<<endl;
    inorder(root);
    cout<<endl;


    cout<<"Postorder traversal"<<endl;
    postorder(root);
    cout<<endl;
}


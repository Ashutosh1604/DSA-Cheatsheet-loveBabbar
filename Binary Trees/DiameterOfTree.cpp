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


//1st approach
//TC:- O(n^2)
/*
int calcHeight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int LHeight=calcHeight(root->left);
    int RHeight=calcHeight(root->right);

    return max(LHeight,RHeight)+1;
}

int calcDiameter(node* root)
{
if(root==NULL)
{
    return 0;
}

int LHeight=calcHeight(root->left);
int RHeight=calcHeight(root->right);
int currDiameter=LHeight+RHeight+1;


int LDiameter=calcDiameter(root->left);
int RDiameter=calcDiameter(root->right);

return max(currDiameter,max(LDiameter,RDiameter));


}





int main()
{
    node *root=new node(1);

    node* n1=new node(2);
    node* n2=new node(3);
    node* n3=new node(4);
    node* n4=new node(5);


    root->left=n1;
    root->right=n2;

    n1->left=n3;
    n1->right=n4;


    cout<<"Diameter of tree is: "<<calcDiameter(root);


}
*/

//2nd approach
//TC:- O(n)
int calcHeight(node* root,int &diameter)
{
    if(root==NULL)
    {
        return 0;
    }



    int LHeight=calcHeight(root->left,diameter);
    int RHeight=calcHeight(root->right,diameter);

    diameter=max(diameter,1+LHeight+RHeight);

    return max(LHeight,RHeight)+1;
}


int main()
{
    node *root=new node(1);

    node* n1=new node(2);
    node* n2=new node(3);
    node* n3=new node(4);
    node* n4=new node(5);


    root->left=n1;
    root->right=n2;

    n1->left=n3;
    n1->right=n4;

  int diameter=0;
    calcHeight(root,diameter);

    cout<<"Diameter of tree is: "<<diameter;

}





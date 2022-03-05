//Code by-ASHUTOSH DHYANI
//is one string is rotation of another string or not
#include<bits/stdc++.h>
using namespace std;


void RotationOrNot(string s1,string s2)
{
    int l1=s1.length();
    int l2=s2.length();

    if(l1 != l2)              //if size of both string is not equal than it can not be a rotation
    {
        cout<<"NO"<<endl;

    }
    else
    {

        string temp=s1+s1;        //adding s1 in s1

        if(temp.find(s2)!=string::npos)    //if s2 is substring of temp than it is a rotation else not
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    string s1="ABACD";
    string s2="CDABA";

    RotationOrNot(s1,s2);
}

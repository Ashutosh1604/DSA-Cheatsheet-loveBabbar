/*

string-  0 0 0 1 0 1 0 1 1 1            false condition
we can flip in two ways:-

case 1-  0 1 0 1 0 1 0 1 0 1             even=1 , odd=0

case 2-  1 0 1 0 1 0 1 0 1 0              even=0 , odd=1

*/


#include<bits/stdc++.h>
using namespace std;




int numOfFlip(string str)
{
    int c1=0;  //for case one flips
    int c2=0;  //for case two flips


    for(int i=0;i<str.size();i++)
    {
        if(i%2!=0 && str[i]=='0')     //if index is odd and 0
        {
            c1++;                    //need to fip
        }
        if(i%2==0 && str[i]=='1')      //index is even and 1
        {
            c1++;                         //flip
        }

        if(i%2!=0 && str[i]=='1')         //index is odd and 1
        {
            c2++;                    //flip
        }
        if(i%2==0 && str[i]=='0')                //index is even and 0
        {
            c2++;                        //flip
        }

    }

    return min(c1,c2);            //return the minimum of both
}
int main()
{
    string str="0001010111";

    cout<<numOfFlip(str);
}

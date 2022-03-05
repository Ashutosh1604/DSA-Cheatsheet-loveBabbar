//Code by-ASHUTOSH DHYANI
//WE CAN DO IT USING RECURSION
#include<bits/stdc++.h>
using namespace std;


int AllSubsequences(string str,string ans[])
{
    if(str.length()==0)        //base case if string length becomes 0 return empty string
    {
        ans[0]=" ";
        return 1;
    }

    int halfAnsSize=AllSubsequences(str.substr(1),ans);         //except 1st element send every element in recursion and get the half ans

    for(int i=0;i<halfAnsSize;i++)       //traverse half of the ans string
    {
        ans[halfAnsSize+i]=str[0]+ans[i];    //and fill rest half with the 1st element + the current ans elements

    }

    return 2*halfAnsSize;                //the total size now will be the double
}
int main()
{
    string str="abc";     //input

    string ans[50];             //empty output string

    int fullAnsSize= AllSubsequences(str,ans);          //call the function and get the length of string ans

    for(int i=0;i<fullAnsSize;i++)                //print all the values in ans
    {
        cout<<ans[i]<<endl;

    }
}

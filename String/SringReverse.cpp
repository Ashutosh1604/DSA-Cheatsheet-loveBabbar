//Code by-ASHUTOSH DHYANI
//reverse string
#include<bits/stdc++.h>
using namespace std;


void reverseStr(string s)
{
    int i=0;
    int j=s.size()-1;



    while(i<j)
    {
       char temp=s[i];
       s[i]=s[j];
       s[j]=temp;
       i++;
       j--;

    }

    cout<<s;

}




int main()
{
    string s;
    cin>>s;

    reverseStr(s);

}

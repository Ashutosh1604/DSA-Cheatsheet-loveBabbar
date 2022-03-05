//Code by-ASHUTOSH DHYANI
//we have to make a sting of frequency and element of each element in the given number
#include<bits/stdc++.h>
using namespace std;

  string CountAndSay(int n)
  {
      if(n==1)
      {
          return "1";
      }
      //recursively finding the ans of n-1
      string s=CountAndSay(n-1);

      string res="";

      int cnt=0;

       for(int i=0;i<s.length();i++)  //traversing the n-1 string
       {
           cnt++;             //calculating frequency of element

           if(i==s.length()-1 || s[i]!=s[i+1])     //if we are at last of string or the next and current elements are not same
           {
               res=res+to_string(cnt)+s[i];   //we store frequency and the element
               cnt=0;  //reset the count
           }
       }

       return res;
  }
int main()
{
    int n;
    cin>>n;
    cout<<CountAndSay(n);
}

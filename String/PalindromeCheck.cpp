//Code by-ASHUTOSH DHYANI
//check if it is palindrome or not
#include<bits/stdc++.h>
using namespace std;


void PalindromeCheck(string s)
{
    int i=0;
    int j=s.size()-1;

    int palindrome=1;



    while(i<j)
    {
      if(s[i]!=s[j])
      {
          palindrome=0;
          break;
      }

       i++;
       j--;

    }

    if(palindrome==1)
    {
        cout<<"is palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }



}




int main()
{
    string s;
    cin>>s;

    PalindromeCheck(s);

}


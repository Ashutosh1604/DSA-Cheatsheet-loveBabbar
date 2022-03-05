//Code by-ASHUTOSH DHYANI
#include<bits/stdc++.h>
using namespace std;


int longestPalindrome(string s)
{
    int len=s.length();
    if(len<2)   //string of length less than 2 is palindrome
    {
        return len;

    }

    int maxLen=1; //to store max length palindrome
    int start=0;  //to store starting point of max length palindrome

    for(int i=0;i<len;i++)
    {
        int low=i-1; //low is 1 behind i
        int high=i+1; //high is one after i

        while(high<len && s[high]==s[i])  //if high is smaller than the length of string and is equal to element at i
        {
            high++;
        }

        while(low>=0 && s[low]==s[i])    //if low is greater than 0 and is equal to element at i
        {
            low--;
        }

        while(low>=0 && high<len && s[high]==s[low]) //high and low both are less than string length and equal
        {
            high++;
            low--;
        }

        int currLen=high-low-1;       //current length of palindrome
       if(maxLen<currLen)
       {
       maxLen= currLen;                 //store the starting point of that palindrome
       start=low+1;                     //store the starting point of longest palindrome
       }

        }

        cout<<s.substr(start,maxLen)<<endl;    //printing the substring


        return maxLen;



}
int  main()
{
    string s="forgeeksskeegfor";

    cout<<"longest palindrome and its length: "<<longestPalindrome(s)<<endl;
}

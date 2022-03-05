/*code by-ASHUTOSH DHYANI

Given a binary string str of length N, the task is to find the maximum count of consecutive substrings str can be divided into such that
 all the substrings are balanced i.e.
 they have equal number of 0s and 1s. If it is not possible to split str satisfying the conditions then print -1


 */


 #include<bits/stdc++.h>
 using namespace std;

int maxSubstr(string str)
{
  int c0=0;  //to count no. of 0's
  int c1=0;  //to count no. of 1's


  int currSubstr;  //to count on. of substring

for(int i=0;i<str.length();i++)
{
    if(str[i]=='0')
    {
        c0++;   //count no. of 0
    }
    else
    {
        c1++;    //count no. of 1
    }


    if(c0==c1)     //if they become equal it is a subtring
    {
        currSubstr++;

    }
}

if(c0!=c1)
{
    return -1;   //if count of 0 and 1 are not equal at the end return -1
}


return currSubstr;   //else return the no. of substrings with equal 0 and 1
}


 int main()
 {
     string str="0100110101";

 cout<<"max no. of substring are: "<<maxSubstr(str);
 }

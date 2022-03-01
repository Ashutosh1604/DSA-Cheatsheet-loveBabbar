//to check all the elements of array is palindromic
#include<bits/stdc++.h>
using namespace std;


bool checkPalindrome(int n)
{
    int num=n;
    int size=0;

    //calculate size of number
    while(n>0)
    {
        size++;
        n=n/10;
    }


    //checking basic conditions
    if(size==1)
    {
        return true;
    }

  //inserting each element of number in an array

  int arr[size];

  for(int i=size-1;i>=0;i--)
  {
     arr[i]=num%10;
     num=num/10;

  }


  //checking palindrome
  int s=0,e=size-1;

  while(s < e)
  {


      if(arr[s]!=arr[e])
      {

          return false;

      }

      s++;
      e--;
  }

  return true;
}
int main()
{
    int arr[]={121 ,131, 20};
    int n=3;

    int ans=1;
    for(int i=0;i<n;i++)
    {

        if (checkPalindrome(arr[i])== false)
        {
            ans= 0;
            break;
        }

    }

    if(ans==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



}

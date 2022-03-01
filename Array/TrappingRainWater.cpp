//water store by block=minimum of longest tower from left and right -  height of tower


#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {3,0,0,2,0,4};
  int n=6;

  int left[n];
  int right[n];

  //store the 1st element of array as current longest from left
  left[0]=arr[0];

  //store remaining longest from left
  for(int i=1;i<n;i++)
  {
      left[i]=max(left[i-1],arr[i]);
  }



  //store the 1st element of array as current longest from right
  right[n-1]=arr[n-1];

  //store remaining longest from right
  for(int i=n-2;i>=0;i--)
  {
      right[i]=max(right[i+1],arr[i]);
  }


//total wanter trapped
  int ans=0;
  for(int i=0;i<n;i++)
  {
      ans=ans+(min(left[i],right[i])-arr[i]);
  }


  cout<<ans;
}

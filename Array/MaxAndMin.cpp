#include<iostream>
#include<limits.h>
using namespace std;

void maxANDmin(int arr[],int n)
{
    int maxval=INT_MIN;
    int minval=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxval)
        {
            maxval=arr[i];
        }

        if(arr[i]<minval)
        {
            minval=arr[i];
        }
    }
     cout<<maxval<<" "<<minval;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  maxANDmin(arr, n);
}

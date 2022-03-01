#include<iostream>
#include<limits.h>
using namespace std;

void maxSubarraySum(int arr[],int n)
{
int maxsum=INT_MIN;

int currsum=0;

for(int i=0;i<n;i++)
{
    currsum=currsum+arr[i];

    if(currsum>maxsum)
    {
        maxsum=currsum;
    }

    if(currsum<0)
    {
        currsum=0;
    }
}

cout<<maxsum;

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

    maxSubarraySum(arr,n);
}

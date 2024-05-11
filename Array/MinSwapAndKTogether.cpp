/*
approach 1:-in all subarray of size k find the numbers that can be swapped
TC:-O(n^2)

approach 2:-sliding window
find count of elements less than k that will be size of window
TC:-O(n)
*/
#include<bits/stdc++.h>
using namespace std;

int minSwap(int arr[],int n,int k)
{
    //count no of elements that we need to put together and it will be size of window
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            cnt++;
        }
    }

    if(cnt==0)
    {
        return 0;
    }

    int i=0;
    int j=0;

    int mnSwap=INT_MAX;
    int bad=0;
    //in the window we will find the no. of elements that can be swapped and when it is min that is the ans
    while(i<=j && j<n)
    {
        if(arr[j]>k)
        {
            bad++;
        }
        j++;

        if(j-i==cnt)
        {
            mnSwap=min(mnSwap,bad);

            if(arr[i]>k)
            {
                bad--;
            }
            i++;
        }

    }

    return mnSwap;
}
int main()
{
    int arr[]={2, 1, 5, 6, 3};
    int n=5;
    int k=3;

    cout<<minSwap(arr,n,k);

}


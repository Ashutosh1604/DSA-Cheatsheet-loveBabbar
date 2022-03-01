#include<bits/stdc++.h>
using namespace std;

int FindPair(int arr[],int n,int k)
{

    unordered_map<int,int> mp;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int diff=k-arr[i];
        if(mp.find(diff)!=mp.end())
        {
   ans=ans+mp.find(diff)->second;

        }

            mp[arr[i]]++;

    }

    return ans;
}
int main()
{
    int arr[]={1, 3, 1, 3};
    int k=4;

    cout<<FindPair(arr,4,k);
}

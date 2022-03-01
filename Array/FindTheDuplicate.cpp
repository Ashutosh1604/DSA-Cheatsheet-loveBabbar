#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> mp;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(mp.find(arr[i])!=mp.end())
        {
            cout<<arr[i];
            break;
        }

        mp[arr[i]]=1;
    }
}

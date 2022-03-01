#include<bits/stdc++.h>
using namespace std;


void printElements(int arr[],int n,int k)
{
    int x=ceil(n/k);

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        if(itr->second>x)
        {
            cout<<itr->first<<" ";
        }
    }
}
int main()
{
    int arr[]={1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1};
    int n=13;


    int k=4;

    printElements(arr,n,k);
}

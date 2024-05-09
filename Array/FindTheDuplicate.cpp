
#include<bits/stdc++.h>
using namespace std;


//optimal approach
//TC-O(n)
//SC-O(1)
int main()
{

     int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


       int slow=arr[0];
        int fast=arr[0];

        do{
            slow=arr[slow];
            fast=arr[arr[fast]];

        }while(slow!=fast);

        fast=arr[0];
        while(slow!=fast)
        {
            slow=arr[slow];
            fast=arr[fast];
        }

        cout<<slow;
    }


/*

2nd approach
//TC- O(n)
//SC-0(n)


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


*/

//if 0 swap arr[low] and arr[mid] , low++,mid++
//if 1 mid++
//if 2 swap arr[mid] and arr[high],high--


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];

    int c0=0,c1=0,c2=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    int low=0,mid=0;
    int high=n-1;

    while(mid<high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}


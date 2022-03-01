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

         if(arr[i]==0)
            c0++;

        else if(arr[i]==1)
            c1++;

        else
            c2++;

    }
c1=c1+c0;
c2=c1+c2;


    for(int i=0;i<n;i++)
    {
        if(i<c0)
        {
            arr[i]=0;
        }
        else if(i<c1)
        {

            arr[i]=1;
        }
        else if(i<c2)
        {

            arr[i]=2;
        }

    }
    for(int i=0;i<n;i++)
    {

        cout<<arr[i];
    }
}

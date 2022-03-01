#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {56 ,67 ,30, 79};
    int n=4;

    sort(arr,arr+n);

    if(n%2!=0)
    {
        int mid=n/2;
        cout<<arr[mid];
    }
    else{
        int mid=(arr[n/2]+arr[(n-1)/2])/2;

        cout<<mid;

    }
}

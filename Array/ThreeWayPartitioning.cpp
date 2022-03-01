/*Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.
The individual elements of three sets can appear in any order. You are required to return the modified array.*/


#include<bits/stdc++.h>
using namespace std;



void threeWayPartitioning(int arr[],int n,int a,int b)
{
    int low=0,mid=0;
    int high=n-1;

    while(mid<=high)
    {
        if(arr[mid]<a)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]>b)
        {
            swap(arr[high],arr[mid]);
            high--;

        }
        else
            mid++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{int ar[] = {1, 14, 5, 20, 4, 2, 54, 20, 87,
                98, 3, 1, 32};
    int n = sizeof(ar)/sizeof(ar[0]);
    int a=10;
    int b=20;

    threeWayPartitioning(ar,n,a,b);
}

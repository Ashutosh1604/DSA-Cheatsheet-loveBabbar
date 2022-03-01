/*Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.*/


#include<bits/stdc++.h>
using namespace std;


int findMinDiff(int arr[],int n,int m)
{
    sort(arr,arr+n);

    int diff=INT_MAX;

    int i=0;
    int j=m-1;

    while(j<n)
    {
        diff=min(diff,arr[j]-arr[i]);
        i++;
        j++;
    }

    return diff;
}
int main()
{
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int n=8;
    int m=5;

    cout<<findMinDiff(arr,n,m);
}

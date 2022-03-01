#include<bits/stdc++.h>
using namespace std;

int longestConsiqutive(int arr[],int n)
{
    set<int> s;

   for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }

    int MaxSeq=0;

    for(int i=0;i<n;i++)
    {

        if(s.find(arr[i]-1)==s.end())  //if element one less than the number is not present in set
        {


            int currNum=arr[i];
            int currMax=1;

            while(s.find(currNum+1)!=s.end())
            {
                currNum++;
                currMax++;
            }

            MaxSeq=max(MaxSeq,currMax);
        }
    }

    return MaxSeq;
}
int main()
{
    int arr[]={2,6,1,9,4,5,3};
    int n=7;

    cout<<longestConsiqutive(arr,n);
}

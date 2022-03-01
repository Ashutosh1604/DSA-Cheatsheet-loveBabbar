#include<bits/stdc++.h>
using namespace std;


bool tripletSum(int arr[],int n,int sum)
{
     sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        int s=i+1;
        int e=n-1;

         while(s<e)
         {

        if(arr[i]+arr[s]+arr[e]==sum)
        {
          return true;
        }
        else if(arr[i]+arr[s]+arr[e]>sum)
        {
            e--;
        }
        else{
            s++;
        }

         }
    }
    return false;
}
int main()
{
    int arr[] = {1 ,2 ,4 ,3 ,6};

    int n=5;
    int sum=10;

   cout<<tripletSum(arr,n,sum);
}

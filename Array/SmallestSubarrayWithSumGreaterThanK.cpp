
//1st approach
//TC:- O(n^2)

#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    int arr[]={1,10,5,2,7};
    int n=6;
    int K=9;

   int miSub=INT_MAX; //length of min subarray
   for(int i=0;i<n;i++)
   {
       int sum=0;

       for(int j=i;j<n;j++)
       {
           sum=sum+arr[j];

           if(sum>K)
           {
               miSub=min(miSub,j-i+1);  //min of mi or size of subarray
           }
       }
   }


   cout<<miSub<<endl;
}

*/
//2nd approach
//TC-O(n)

int main()
{
    int arr[]= {1,4,5,2,7};
    int n=5;
    int k=9;

    int i=0;
    int j=0;
    int sum=0;
    int len=INT_MAX;

    while(i<=j && j<n)
    {
        sum+=arr[j];

        while(sum-arr[i]>k)
        {
            sum-=arr[i];
            i++;
        }

        if(sum>k)
        {
            len=min(len,j-i+1);
        }

        j++;
    }



    cout<<len<<endl;
}

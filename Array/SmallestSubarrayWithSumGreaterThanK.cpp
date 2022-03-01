
#include<bits/stdc++.h>
using namespace std;

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
               miSub=min(miSub,j-1+1);  //min of mi or size of subarray
           }
       }
   }


   cout<<miSub<<endl;
}

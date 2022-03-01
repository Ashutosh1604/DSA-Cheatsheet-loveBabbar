
#include<bits/stdc++.h>
using namespace std;


void AlternateVal(int arr[],int n)
{
   int s=0;
   int e=n-1;

   while(s<e)
   {
       if(arr[s]>0 || arr[e]<0)
       {
           swap(arr[s],arr[e]);
           s++;
           e--;
       }
   }

   int i=1;
   int j=n-2;

   while(i<j)
   {
       swap(arr[i],arr[j]);
       i=i+1;
       j--;
   }


   for(int i=0;i<n;i++)
   {

       cout<<arr[i];
   }

}
int main()
{
    int arr[]={-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    AlternateVal(arr,9);

}

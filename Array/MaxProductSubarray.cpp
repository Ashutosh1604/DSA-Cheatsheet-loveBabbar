#include<bits/stdc++.h>
using namespace std;

void maxProduct(int arr[],int n)
{
   int currPro=1;
   int maxPro=INT_MIN;

   for(int i=0;i<n;i++)
   {
       currPro=currPro*arr[i];

       if(currPro==0)
       {
           currPro=1;

       }

       maxPro=max(maxPro,currPro);
   }

   cout<<maxPro<<endl;
}
int main()
{
    int arr[]={2, 3, 4, 5, -1, 0};

    maxProduct(arr,6);
}

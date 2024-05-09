#include<iostream>
using namespace std;

/*approach 1
//O(n)
when rearrangement of data is allowed

void separate(int arr[],int n)
{
 int s=0;
 int e=n-1;

 while(s<e)
 {
     if(arr[s]>=0 && arr[e]<0)
     {
         swap(arr[s],arr[e]);
         s++;
         e--;
     }
     if(arr[s]<0)
     {
         s++;
     }
     if(arr[e]>=0)
     {
         e--;
     }
 }

}
*/

/*
approach 2
rearrangement is not allowed
//TC:- O(n^2)
*/

void separate(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    if(arr[i]<0)     //if a negative element is found
    {
        int temp=arr[i];    //store element and shift all the +ve elements before it to its right
        int j=i-1;
        while(j>=0 && arr[j]>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
}

 void printarr(int arr[], int n)
 {
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
 }
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  separate(arr, n);
  printarr(arr, n);
}

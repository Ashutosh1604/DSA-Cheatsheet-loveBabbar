
#include<iostream>
using namespace std;


//itrative method
/*void reverseArray(int arr[],int start,int end)
{

    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }

}*/


//recursive
void reverseArray(int arr[],int start,int end)
{
  if(start>=end)
  {
      return;
  }

  int temp=arr[start];
  arr[start]=arr[end];
  arr[end]=temp;

  reverseArray(arr,start+1,end-1);

}


void printarr(int arr[],int n)
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


reverseArray( arr, 0,n-1);
  printarr( arr, n);
}





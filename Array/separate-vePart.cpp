#include<iostream>
using namespace std;


separate(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
            }
            j++;
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

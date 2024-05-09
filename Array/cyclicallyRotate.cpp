#include<iostream>
using namespace std;

/*
1st approach
//TC:-O(n^2)
void cyclicallyRotate(int arr[],int n,int k)
{

    for(int i=0;i<k;i++)
{
    int last=arr[n-1];

    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];

    }

    arr[0]=last;

    //print
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

}

*/

//TC:-O(n)
void reverseArr(int arr[],int s,int e)
{
    if(s>=e)
    {

        return;
    }

    int temp=arr[s];
    arr[s]=arr[e];
    arr[e]=temp;

    reverseArr(arr,s+1,e-1);

}

void cyclicallyRotate(int arr[],int n,int k){

     k=k%n;

      reverseArr(arr,0,n-k-1);
      reverseArr(arr,n-k,n-1);

      reverseArr(arr,0,n-1);

      //print
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

    int k;
cin>>k;

   cyclicallyRotate(arr,n,k);

    return 0;
}

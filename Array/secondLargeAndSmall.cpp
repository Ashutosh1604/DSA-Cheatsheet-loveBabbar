#include<iostream>
#include<limits.h>
using namespace std;

void largeAndSecondl(int arr[],int n)
{
    int l=INT_MIN;
    int sl=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl && arr[i]<l)
        {
            sl=arr[i];
        }
    }
    cout<<l<<" "<<sl<<endl;

}

   void smallAndSeconds(int arr[],int n)
   {
    int s=INT_MAX;
    int ss=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<s)
        {
            ss=s;
            s=arr[i];
        }
        else if(arr[i]<ss && arr[i]>s)
        {
            ss=arr[i];
        }
    }
    cout<<s<<" "<<ss;

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
    largeAndSecondl(arr,n);
    smallAndSeconds(arr,n);
}



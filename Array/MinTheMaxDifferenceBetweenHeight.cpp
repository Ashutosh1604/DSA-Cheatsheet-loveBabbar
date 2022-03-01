#include<iostream>
#include<algorithm>
using namespace std;

int main()
{


    int arr[]={1, 5, 8, 10};
    int k=2;
    int n=4;
    int mi=INT_MAX;
    int ma=INT_MIN;

    for(int i=0;i<n;i++)
    {
        ma=max(ma,arr[i]);
        mi=min(mi,arr[i]);
    }

    int ans=ma-mi;

    if(ans >= 2*k)
    {
        ans=ans-2*k;
    }
    else if(ans>=k)
    {
        ans=ans-k;
    }
    else{
        ans=abs(ans-k);


    }

    cout<<ans;


}

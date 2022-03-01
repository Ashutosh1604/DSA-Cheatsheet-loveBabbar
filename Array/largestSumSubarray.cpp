
#include<iostream>

using namespace std;

void largestSumSubarray(int arr[],int n)
{
    int msum=0;
    int csum=0;

    for(int i=0;i<n;i++)
    {
        csum=csum+arr[i];

        if(csum>msum)
        {
            msum=csum;
        }

        if(csum<0)
        {
            csum=0;
        }
    }

cout<<msum<<endl;

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

   largestSumSubarray(arr,n);

    return 0;
}


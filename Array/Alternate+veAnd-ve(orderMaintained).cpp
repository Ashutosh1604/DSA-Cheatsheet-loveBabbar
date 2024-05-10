#include<bits/stdc++.h>
using namespace std;

int rightRotate(int arr[],int from ,int to)
{
    int temp=arr[to];
    for(int i=to;i>from;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[from]=temp;

}


void rearrange(int arr[],int n)
{
    int wrngIdx=-1;
    for(int i=0;i<n;i++)
    {
        if(wrngIdx!=-1)
        {
            if((arr[wrngIdx]>=0 && arr[i]<0) || (arr[wrngIdx]<0 && arr[i]>=0)){   //as we get opposite sign rotate it
                rightRotate(arr,wrngIdx,i);

                if(i - wrngIdx>=2) //we have a wrong index in between
                {
                    wrngIdx+=2;
                }
                else
                {
                    wrngIdx=-1;
                }
            }

        }
        else
        {
            if((arr[i]<0 && i%2!=0) || (arr[i]>=0 && i%2==0))
            {
                wrngIdx=i;
            }
        }
    }






    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1, 2, 3, -4, -1, 4};
    int n=6;

    rearrange(arr,n);
}

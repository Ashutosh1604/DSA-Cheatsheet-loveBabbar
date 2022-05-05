

#include<bits/stdc++.h>
using namespace std;
const int r=4;
const int c=4;


//approach1
//TC:- O(nlogk)
//SC:-O(k)
/*
void kthSmallest(int arr[r][c],int k)
{
    priority_queue<int,vector<int>,greater<int>> p;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            p.push(arr[i][j]);


        }
    }



    int ans;

    for(int i=1;i!=p.empty();i++)
    {
        if(i==k)
        {
            ans=p.top();
            break;

        }

        p.pop();
    }

    cout<<ans;
}
*/


void kthSmallest(int arr[r][c],int k)
{

    int low=arr[0][0];
    int high=arr[r-1][c-1];
    while(low<high)
    {
        int mid=low+(high-low)/2;
        int cnt=0;
        for(int i=0;i<r;i++)
        {
            cnt=cnt+upper_bound(arr,arr+r,mid)-arr;
        }

        if(cnt<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
    }

    cout<<low;
}
int main()
{
    int arr[r][c] =  {{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }};


            int k;
  cout<<"enter the value of k"<<endl;
  cin>>k;
                kthSmallest(arr,k);
}


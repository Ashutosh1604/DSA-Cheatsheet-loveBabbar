//matrix is sorted row wise
//code by: ASHUTOSH DHYANI
#include<bits/stdc++.h>
using namespace std;
#define MAX 100




MedianOfMatrix(int arr[][MAX],int r,int c)
{
    int mn=INT_MAX;
    int mx=INT_MIN;

    for(int i=0; i<r; i++)
    {
        //finding the min element from 1st column
        if(mn>arr[i][0])
        {
            mn=arr[i][0];
        }

        //finding max element from the last column
        if(mx<arr[i][c-1])
        {
            mx=arr[i][c-1];
        }
    }


    int targetIdx=(r*c + 1)/2;  //finding the desired index;

    while(mn < mx)
    {
        int mid= mn+ (mx-mn)/2;  //finding the middle element b/w min and max element
        int place=0;  //for counting the position of middle element

        //counting the position of mid by counting no. of elements smaller than and equal to mid in each row

        for(int i=0;i<r;i++)
        {
            place=place + upper_bound(arr[i],arr[i]+c,mid) - arr[i]; //difference b/w upperbound of mid and starting element index will be the no. of elements less than equal to mid
        }

        //if mid place is smaller than the target index we update min
        if(place < targetIdx)
        {
            mn=mid+1;
        }
        else  //if mid place is greater or equal to target place update max
        {
            mx=mid;

        }

    }

    return mn; // as ans will be stored in mn

}
int main()
{
    int r=3;
    int c=3;

    int arr[][MAX]= { {1,3,5}, {2,6,9}, {3,6,9} };
    cout<<MedianOfMatrix(arr,r,c)<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;



int maxTwoBuySell(int arr[],int n)
{
    int first_buy=INT_MAX;
    int first_sell=INT_MIN;
    int second_buy=INT_MIN;
    int second_sell=INT_MIN;

    for(int i=0;i<n;i++)
    {
        first_buy=min(first_buy,arr[i]);
        first_sell=max(first_sell,arr[i]-first_buy);
        second_buy=max(second_buy,first_sell-arr[i]);
        second_sell=max(second_sell,second_buy+arr[i]);
    }


    return second_sell;

}
int main()
{
    int prices[] = {10, 22, 5, 35, 65, 80};

    int n=6;

    cout<<maxTwoBuySell(prices,n);
}


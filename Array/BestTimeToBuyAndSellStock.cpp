   #include<bits/stdc++.h>
using namespace std;

   int maxProfit(vector<int>& prices) {
        int profit=0;

        int sm=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            sm=min(sm,prices[i]);

            profit=max(profit,prices[i]-sm);
        }

        return profit;
    }

    int main()
    {
        vector<int> prices{7,1,5,3,6,4};

        cout<<maxProfit(prices);
    }

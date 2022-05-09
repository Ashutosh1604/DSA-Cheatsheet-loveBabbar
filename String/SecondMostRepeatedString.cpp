#include<bits/stdc++.h>
using namespace std;


void SndMostRepeat(string arr[],int n)
{
    unordered_map<string,int> mp;

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    int mx=INT_MIN , mx2=INT_MIN;

    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        mx=max(mx,itr->second);


    }


    string ans;

    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
     if(itr->second>mx2 && itr->second<mx)
        {
            mx2=itr->second;
            ans=itr->first;
        }
}
    cout<<ans<<": is the string that is repeated 2nd largest times"<<" ";
}
int main()
{
    string arr[]={"aaa", "bbb", "ccc", "bbb", "aaa", "aaa","ccc","ccc","ccc"};
      int n=9;

    SndMostRepeat(arr, n);
}

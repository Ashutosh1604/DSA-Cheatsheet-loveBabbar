#include<bits/stdc++.h>
using namespace std;


void common(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3)
{

    unordered_map<int,int> mp;

    vector<int> ans;
for(int i=0;i<n1;i++)
{
    mp[arr1[i]]++;
}
for(int i=0;i<n2;i++)
{
    mp[arr2[i]]++;
}
for(int i=0;i<n3;i++)
{
    mp[arr3[i]]++;
}


 for(auto itr=mp.begin();itr!=mp.end();itr++)
{
    if(itr->second==3)
    {

        ans.push_back(itr->first);
    }
}


for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
}
int main()
{
int arr1[]={1, 5, 10, 20, 40, 80};
int arr2[]={6, 7, 20, 80, 100};
int arr3[]={3, 4, 15, 20, 30, 70, 80, 120};

common(arr1,arr2,arr3,6,5,8);

}

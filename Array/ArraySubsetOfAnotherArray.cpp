#include<bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int,int> mp;
int arr1[] = {11, 1, 13, 21, 3, 7};
int arr2[] = {11, 3, 7, 1};
int n1=6;
int n2=4;

int c=0;


for(int i=0;i<n1;i++)
{
    mp[arr1[i]]++;
}

for(int i=0;i<n2;i++)
{
    mp[arr2[i]]++;
}


for(auto itr=mp.begin();itr!=mp.end();itr++)
{
   if(itr->second==2)
   {
       c++;
   }
}

if(c==n2)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}

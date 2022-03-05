//Code by-ASHUTOSH DHYANI
//print all the duplicates in the string
#include<bits/stdc++.h>
using namespace std;


void  DuplicateValues(string s)
{
    unordered_map<char,int> mp;

for(int i=0;i<s.size();i++)
{
    mp[s[i]]++;
}

for(auto itr=mp.begin();itr!=mp.end();itr++)
{
if(itr->second > 1)
{
    cout<<itr->first<<" "<<"count: "<<itr->second<<endl;

}
}



}




int main()
{
    string s="ashutosh atos";


    DuplicateValues(s);

}


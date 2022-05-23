//TC:-26*n

#include<bits/stdc++.h>
using namespace std;


string firstNonRepeating(string str)
{
    string ans="";
    vector<int> cnt(26,0);  //to count frequency of character

    vector<char> v;  //vector to maintain order of character

    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(cnt[str[i]-'a'] == 0)    //if character is encountered first time
        {
            v.push_back(str[i]);  //push in v vector
        }
        cnt[str[i]-'a']++;  //increase the frequency
        int flag=0;
        int m=v.size();      //size of v vector
        for(int j=0;j<m;j++)
        {
            if(cnt[v[j]-'a']==1)       //if in v character frequency is 1
            {
                ans.push_back(v[j]);     //push it in answer
                flag=1;                //reverse flag
                break;
            }
        }
        if(flag==0)               //if in v character frequency is more than 1
        {
            ans.push_back('#');              //push # in answer
        }
    }

    return ans;
}
int main()
{
    string str="aabc";


    cout<<firstNonRepeating(str);
}

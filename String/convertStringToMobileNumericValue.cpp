
#include<bits/stdc++.h>
#include<string>
using namespace std;


string toMobile(string arr[],string str)
{
    string ans="";

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            ans=ans+'0';
        }
        else
        {
            int pos=str[i]-'A';
            ans=ans+arr[pos];
        }
    }


    return ans;
}
int main()
{

    string arr[]={"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };


    string str="GEEKSFORGEEKS";

    cout<<toMobile(arr,str);
}

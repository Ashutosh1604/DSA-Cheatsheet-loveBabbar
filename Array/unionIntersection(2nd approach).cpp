//insert all values of arr1 in map as key with value 1
//if value of arr2 is present in map increment value if not present insert with value 1
//for union print key
//for intersection print key only with value 2

#include<bits/stdc++.h>
using namespace std;



void UnionInt(int arr1[],int arr2[],int n1,int n2 )
{

    map<int ,int> mp;

    for(int i=0;i<n1;i++)
    {
        mp[arr1[i]]=1;
    }

    for(int i=0;i<n2;i++)
    {
        if(mp.find(arr2[i])!=mp.end())
        {
            mp.find(arr2[i])->second++;
        }
        else{
            mp[arr2[i]]=1;
        }
    }

    cout<<"union: ";
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<" ";
    }

    cout<<"intersection: ";
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        if(itr->second>1)
        {
            cout<<itr->first<<" ";
        }
    }


}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,3};

    UnionInt(arr1,arr2,5,3);
}


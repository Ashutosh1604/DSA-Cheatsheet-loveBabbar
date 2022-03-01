#include<iostream>
#include<queue>
using namespace std;



void Kthsmall(int arr[], int n,int k)
{
priority_queue<int,vector<int>,greater<int>> p;

for(int i=0;i<n;i++)
{
    p.push(arr[i]);
}

int ans;

for(int i=1;i!=p.empty();i++)
{
    if(i==k)
    {
        ans=p.top();
        break;

    }
    p.pop();
}
cout<<ans;
}


int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  int k;
  cin>>k;
   Kthsmall(arr, n,k);
}

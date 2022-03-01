//o(n) but order not maintained
#include<bits/stdc++.h>
using namespace std;


void AlternateVal(int arr[],int n)
{
  int j=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]<0)
      {
          if(i!=j)
          {
              swap(arr[i],arr[j]);
          }
          j++;
      }
  }


int s=1;
int e=j;

while(s<=e && e<=n)
{
    swap(arr[s],arr[e]);
    s=s+2;
    e++;
}

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}



}
int main()
{
    int arr[]={1, 2, 3, -4, -1, 4};
    AlternateVal(arr,6);

}

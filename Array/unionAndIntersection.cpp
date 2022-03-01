#include<iostream>
using namespace std;

void Punion(int arr1[],int arr2[],int n1,int n2)
{
int i=0,j=0,k=0;
int uni[20];

while(i<n1 && j<n2)
{

    if(arr1[i]<arr2[j])
    {
        uni[k]=arr1[i];
        i++;
    }
    else if(arr1[i]==arr2[j])
    {
       uni[k]=arr1[i];
        i++;
        j++;
    }
    else
    {
        uni[k]=arr2[j];
        j++;
    }

    k++;

}

//printing remaining elements

while(i<n1)
{
    uni[k]=arr1[i];
    i++;
    k++;
}

while(j<n2)
{
    uni[k]=arr2[j];
    j++;
    k++;

}

//printing union

for(int i=0;i<k;i++)
{
    cout<<uni[i]<<" ";
}



}


void Pintersection(int arr1[],int arr2[],int n1,int n2)
{

int i=0,j=0,k=0;
int ins[20];

    while(i<n1 && j<n2)
    {
       if(arr1[i]<arr2[j])
       {
           i++;
       }
       else if(arr1[i]>arr2[j])
       {
           j++;

       }
       else
       {
           ins[k]=arr1[i];
           i++;
           j++;
           k++;
       }
    }

    for(int i=0;i<k;i++)
    {
        cout<<ins[i]<<" ";

    }
}


int main()
{
  int n1,n2;
  cin>>n1>>n2;
  int arr1[n1];
  int arr2[n2];
  for(int i=0;i<n1;i++)
  {
      cin>>arr1[i];
  }
   for(int i=0;i<n2;i++)
  {
      cin>>arr2[i];
  }
  Punion(arr1,arr2,n1,n2);
//  Pintersection(arr1,arr2,n1,n2);
}

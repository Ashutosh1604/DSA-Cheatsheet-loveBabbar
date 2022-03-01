#include<iostream>
using namespace std;

void secondNonRepeat(int arr[],int n)
{
    int c,d=0;

for(int i=0;i<n;i++)
{
    c=0;
 for(int j=0;j<n;j++)
 {


        if(arr[i]==arr[j] && i!=j)
         {
             c++;
         }

}

if(c==0)
{
    d++;
}

if(d==2)
{
    cout<<arr[i];
}



}
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
    secondNonRepeat(arr,n);

}

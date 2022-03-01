#include<iostream>
using namespace std;

void thirdRepeating(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    int c=0;
    for(int j=i;j<n;j++)
    {
    if(arr[i]==arr[j])
    {
        c++;
    }

    }

    if(c==3)
    {
        cout<<arr[i];
        break;
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

    thirdRepeating(arr,n);
}

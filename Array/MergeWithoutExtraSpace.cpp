#include<bits/stdc++.h>
using namespace std;


mergeArr(int arr1[],int arr2[],int n1,int n2)
{
    int i=n1-1,j=0;

    while(i>=0 && j<n2)
    {
        if(arr1[i]>arr2[j])
        {
            swap(arr1[i],arr2[j]);
        }

        i--;
        j++;
    }

    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);

    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    for(int j=0;j<n2;j++)
    {
        cout<<arr2[j]<<" ";
    }
}
int main()
{
    int arr1[]={1,3,5,7};
    int arr2[]={0,2,6,8,9};

    mergeArr(arr1,arr2,4,5);

}

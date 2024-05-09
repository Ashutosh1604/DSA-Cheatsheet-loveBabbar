/*
approach 1:-sort array and find
TC:-O(nlogn)

approach 2:-using set
TC:-O(nlogn)
SC:-O(n)

*/


//approach 3
// max heap declaration :- priority_queue <int> pq
//TC for max heap to find kth largest:- O(n+klogn)
//n-for building heap
//klogn-we are popping k elements and after popping we need to heapify which taken logn
//TC for min heap to find kth largest:- O(n+(n-k+1)log(n-k+1))

#include<iostream>
#include<queue>
using namespace std;


/*
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
cout<<k<<" smallest element is "<<ans;
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
  cout<<"enter the value of k"<<endl;
  cin>>k;
   Kthsmall(arr, n,k);
}
*/


//approach 4
//quick select
//worst case TC(when already sorted):- O(n^2)
//average case TC:- O(n)

int Partition(int arr[],int l,int r)
{
    int pivot=arr[l];
    int i=l;
    int j=r;

    while(i<j)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[j],arr[l]);

    return j;


}

int quickSelect(int arr[],int l,int r,int k)
{
    //we find the position of pivot

      int p=Partition(arr,l,r);

     //if pivot is at k position it is answer
        if(p==k-1){
            return arr[p];
        }
        else if(k-1<p)   //if pivot is  greater than the ans at k than sort only left part of pivot
        {

        return quickSelect(arr,l,p-1,k);
        }
        else{

        return quickSelect(arr,p+1,r,k);  //if pivot is  smaller than the ans at k than sort only right part of pivot
        }





}



int main()
{
  int n=6;
  int arr[n]={3,2,1,5,6,4};
  int k=2;

    cout<<quickSelect(arr,0,n-1,k);    // cout<<quickSelect(arr,0,n-1,(n-k)+1);   for kth largest





}

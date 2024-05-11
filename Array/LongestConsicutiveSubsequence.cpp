#include<bits/stdc++.h>
using namespace std;



/*
//brutefore approach:- sort the array than linearly iterate and find max consecutive subsequence
//TC:-NlogN(for sorting) + N(for iteration)
#include <bits/stdc++.h>
using namespace std;

// Returns length of the longest
// contiguous subsequence
int longestConsiqutive(int arr[], int n)
{
    int maxseq = 0, count = 0;

    // sort the array
    sort(arr, arr + n);

    vector<int> v;
    v.push_back(arr[0]);

    // insert repeated elements only once in the vector
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1])
            v.push_back(arr[i]);
    }
    // find the maximum length
    // by traversing the array
    for (int i = 0; i < v.size(); i++) {

        // Check if the current element is equal
        // to previous element +1
        if (i > 0 && v[i] == v[i - 1] + 1)
            count++;
        // reset the count
        else
            count = 1;

        // update the maximum
        maxseq = max(maxseq, count);
    }
    return maxseq;
}
*/

//Optimal approach:-
//TC:- N(for pushing in set) + N(for again iterating)+N

int longestConsiqutive(int arr[],int n)
{
    unordered_set<int> s;

   for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }

    int MaxSeq=0;

    for(int i=0;i<n;i++)
    {

        if(s.find(arr[i]-1)==s.end())  //if element one less than the number is not present in set we start finding the length of subsequence else move to next number
        {


            int currNum=arr[i];
            int currMax=1;

            while(s.find(currNum+1)!=s.end())  //if next number is present
            {
                currNum++; //increase number by one
                currMax++;   //increase the length of subsequence
            }

            MaxSeq=max(MaxSeq,currMax);
        }

    }

    return MaxSeq;
}
int main()
{
    int arr[]={2,6,1,9,4,5,3,2};
    int n=8;

    cout<<longestConsiqutive(arr,n);
}

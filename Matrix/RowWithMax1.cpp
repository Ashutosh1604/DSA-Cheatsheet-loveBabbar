//code by:ASHUTOSH DHYANIz
//matrix is sorted row wise

#include<bits/stdc++.h>
using namespace std;

const int r=4;
const int c=4;


//time Complaxity O(m*n)
//bruteforce approach
/*
int rowWithMax1s(bool arr[r][c] )
{

    int maxCnt=0;
    int rowIdx=-1;

    for(int  i=0;i<r;i++)
    {
        int cnt=0;
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==1)
            {
                cnt++;
            }

            if(cnt>maxCnt)
            {
                maxCnt=cnt;
                rowIdx=i;
            }

        }
    }

    return rowIdx;
}

*/







//2nd approach
//Time Complexity: O(mLogn) where m is number of rows and n is number of columns in matrix
/*
int first_1(bool arr[], int low, int high)
{
    if(high >= low)
    {
        // Get the middle index
        int mid = low + (high - low)/2;

        // Check if the element at middle index is first 1
        if ( ( mid == 0 || arr[mid-1] == 0) && arr[mid] == 1)
            return mid;

        // If the element is 0, recur for right side
        else if (arr[mid] == 0)
            return first_1(arr, (mid + 1), high);

        // If element is not first 1, recur for left side
        else
            return first_1(arr, low, (mid -1));
    }
    return -1;
}

int rowWithMax1s(bool arr[r][c])
{
    int idx;
    int minIdx=INT_MAX;
    int maxRowIdx=0;  //index with max 1

    for(int i=0;i<r;i++)
    {
        idx=first_1(arr[i],0,c-1); //it will give the min index from where 1 is starting

           if(idx!=-1 && idx<minIdx)   //checking if index has get some value and index is current min or not
           {
               minIdx=idx; //store index to min

               maxRowIdx=i;  //store the index of row with max 1
           }
    }

    return maxRowIdx;

}
*/





//3rd approach
//Time Complexity:O(m+n)

int rowWithMax1s(bool arr[r][c])
{
    int col=c-1;
    int row=-1;//the row with max 1
   for(int i=0;i<r;i++) //traversing all rows
   {
       for(int j=col;j>=0;j--) //traversing from top right
       {
           if(arr[i][j]==1)
           {
               row=i;  //if we find 1 in the row it could be the answer
               col--; //we will not see same column again

           }
           else{
            break; //if you find 0 skip that row
           }
       }
   }
return row;
}
int main()
{

    bool arr[r][c] = { {0, 0, 0, 1},
                     {0, 1, 1, 1},
                     {1, 1, 1, 1},
                     {0, 0, 0, 0}};

   // cout << "Index of row with maximum 1's is " << rowWithMax1s(arr);  //1st approach
  //  cout << "Index of row with maximum 1's is " << rowWithMax1s(arr);  //2nd approach
    cout << "Index of row with maximum 1's is " << rowWithMax1s(arr);  //2nd approach



    return 0;
}


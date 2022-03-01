/*Given an n x n matrix mat[n][n] of integers, find the maximum value of mat(c, d) – mat(a, b) over all
choices of indexes such that both c > a and d > b.*/


//code by:ASHUTOSH DHYANI
#include<bits/stdc++.h>
using namespace std;
const int r=5;
const int c=5;

//1st approach
//time complaxity: O(n^4)
int findMaxValue(int arr[r][c])
{
    int maxDiff=INT_MIN;

    for(int a=0;a<r-1;a++)
    {
        for(int b=0;b<c-1;b++)
        {
            for(int d=a+1;d<r;d++) //d will always be greater than a
            {
                for(int e=b+1;e<c;e++) // e will always be greater than b
                {
                    if(arr[d][e]-arr[a][b]>maxDiff)
                    {
                        maxDiff=arr[d][e]-arr[a][b];
                    }
                }

            }
        }
    }

    return maxDiff;
}

int main()
{
   int arr[r][c] = {
                { 1, 2, -1, -4, -20 },
                { -8, -3, 4, 2, 1 },
                { 3, 8, 6, 1, 3 },
                { -4, -1, 1, 7, -6 },
                { 0, -4, 10, -5, 1 }
            };


            cout<<"maximum value is: "<<findMaxValue(arr)<<endl;
}

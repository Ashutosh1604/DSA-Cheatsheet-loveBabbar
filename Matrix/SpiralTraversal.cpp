#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4] =   { {1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15,16}
                      };

    int r=4;
    int c=4;

    int row_start=0,row_end=r-1;
    int col_start=0,col_end=c-1;

    while(row_start<=row_end && col_start<=col_end)
    {

       for(int col=col_start;col<=col_end;col++)
       {
           cout<<arr[row_start][col]<<" ";
       }

       row_start++;


       for(int row=row_start;row<=row_end;row++)
       {
           cout<<arr[row][col_end]<<" ";
       }
       col_end--;


       for(int col=col_end;col>=col_start;col--)
       {
           cout<<arr[row_end][col]<<" ";
       }

       row_end--;

       for(int row=row_end;row>=row_start;row--)
       {
           cout<<arr[row][col_start]<<" ";
       }

       col_start++;
    }
}

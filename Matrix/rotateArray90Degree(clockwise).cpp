//approach 1
//find transpose of matrix
//swap elements

//TC:-O(r*c)
#include<bits/stdc++.h>
using namespace std;
const int r=4;
const int c=4;


void rotateMat(int arr[r][c])
{

    //finding transpose
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            int temp=arr[j][i];
            arr[j][i]=arr[i][j];
            arr[i][j]=temp;

        }
    }


    //Swap columns
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c/2;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][c-j-1];
            arr[i][c-j-1]=temp;
        }
    }
}

void printMat(int arr[r][c])
{
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cout<<arr[i][j]<<" ";
    }

    cout<<endl;
}

cout<<endl;
}


int main()
{
    int arr[r][c] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };

                      printMat(arr);


                   rotateMat(arr);

                      printMat(arr);

}




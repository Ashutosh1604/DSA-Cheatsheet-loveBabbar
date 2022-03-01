//code by:ASHUTOSH DHYANI
#include<bits/stdc++.h>
using namespace std;
const int r=3;
const int c=3;


void SortMatrix(int arr[r][c])
{
    int temp[r*c];   // temporary array of size r*c
    int k=0;  //index of temp matrix


    //copying all elements of arr into temp
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            temp[k]=arr[i][j];
            k++;
        }
    }

    //sorting temp array
    sort(temp,temp+k);

    //copy all the elements into temp back to arr
    k=0;

     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
         arr[i][j]=temp[k];
         k++;
        }
    }
}

//display matrix
void printMatrix(int arr[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int arr[r][c] = { { 5, 4, 7 },
                    { 1, 3, 8 },
                    { 2, 9, 6 }
                    };

    cout<<"Matrix before sorting"<<endl;
    printMatrix(arr);

    SortMatrix(arr);

    cout<<"Matrix after sorting"<<endl;
    printMatrix(arr);

}

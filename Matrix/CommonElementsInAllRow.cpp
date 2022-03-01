#include <bits/stdc++.h>
using namespace std;


const int r=4;
const int c=5;
// prints common element in all rows of matrix
void CommonElements(int arr[r][c])
{
    unordered_map<int, int> mp;

    // initialize 1st row elements with value 1
    for (int j = 0; j < c; j++)
    {

        mp[arr[0][j]] = 1;
    }

    // traverse the matrix from next row
    for (int i = 1; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // If element is present in the map and is not duplicated in current row.
            if (mp[arr[i][j]] == i)
            {
               // we increment count of the element in map by 1
                mp[arr[i][j]]++;

                // If this is last row and the value of key is equal to no. of rows
                if (i==r-1 && mp[arr[i][j]]==r)
                {

                  cout << arr[i][j] << " ";
                }
            }
        }
    }
}


int main()
{
    int arr[r][c] =
    {
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };

    CommonElements(arr);

    return 0;
}



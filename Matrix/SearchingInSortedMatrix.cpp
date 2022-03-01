#include<bits/stdc++.h>
using namespace std;

int main()
{
     int arr[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
     int n=3;
     int m=4;


     int target=3;//target

     //starting from top right
     int r=0;
     int c=m-1;

     int found=0;  //flag
     while(r<n && c>=0)
     {
         if(arr[r][c]==target)   //if found flag will be true
         {
             found=1;
             break;

         }
         else if(arr[r][c]>target)    //if value is greater move left as at left values are smaller
         {
             c--;
         }
         else
         {
             r++;                    //move down if you want greater value
         }


     }



     if(found)
     {
         cout<<"true";
     }
     else
     {
         cout<<"false";
     }



}

//Code by-ASHUTOSH DHYANI
//Checking if the res string is shuffle of s1 and s2 or not
#include<bits/stdc++.h>
using namespace std;


bool checkShuffle(string s1,string s2,string res)
{
    int l1=s1.length();
    int l2=s2.length();

    int l3=res.length();

    if((l1+l2) != l3)           //
    {
        return false;
    }
    else
    {

        sort(s1.begin(), s1.end());
        sort(s2.begin(),s2.end());
        sort(res.begin(),res.end());

        int i=0,j=0,k=0;

        while(k<l3)
        {
            if(i<l1 && s1[i]==res[k])
            {
                i++;
            }
            else if(j<l2 && s2[j]==res[k])
            {
                j++;
            }
            else{
                 return false;
              }

              k++;
        }

        if(i>=l1 || j>=l2)
        {
            return true;
        }



    }

}
int main()
{
    string s1="XY";
    string s2="12";


    string res="X1Y2";


     if(checkShuffle(s1,s2,res) == 1)
     {
         cout<<"YES"<<endl;

     }
     else{
      cout<<"NO"<<endl;
     }


}

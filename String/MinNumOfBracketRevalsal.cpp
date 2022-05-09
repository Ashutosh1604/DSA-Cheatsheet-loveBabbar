

#include<bits/stdc++.h>
#include<string>
using namespace std;


int minRevarsal(string str)
{
    if(str.size()%2!=0)     //if there are odd no. of brackets then all the brackets can not be paired
    {
        return -1;
    }

    stack<char> st;
    int c1=0;  //for closing bracket
    int c2=0;    //for opening bracket

      for(int i=0;i<str.size();i++)
      {
          if(str[i]=='{')
            {
                st.push(str[i]);
                c2++;    //increment the count of opening bracket
            }
            else if(str[i]=='}' && !st.empty() && st.top()=='{')
                {
                    st.pop();
                    c2--;  //pair is balanced so reduce count of opening bracket
                }
                else
                {
                    c1++; //increment count of closing bracket if pair is not present
                }

      }

      //now we have count of those opening and closing brackets those do not make pairs


      if(c1%2!=0)
      {
          c1=(c1/2)+1;  //if no of closing brackets are odd
      }
      else
      {
          c1=c1/2;   //if even
      }



      if(c1%2!=0)
      {
          c2=(c2/2)+1;  //if no of opening brackets are odd
      }
      else
      {
          c2=c2/2;   //if even
      }

        int totalRevarsal=c1+c2;

        return totalRevarsal;



}
int main()
{
    string str="}{{}}{{{";

    cout<<minRevarsal(str);
}


//code by- ASHUTOSH DHYANI
#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str)
{
    stack<char> st;
    bool ans=true;

    for(int i=0;i<str.length();i++)
    {
        //for open brackets
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
            {
                st.push(str[i]);
            }

            //for closing brackets

            else if(str[i]==')')
            {
                if(!st.empty() && st.top()=='(')
                {
                    st.pop();
                }
                else{
                    ans=false;
                    break;
                }
            }


            else if(str[i]=='}')
            {
                if(!st.empty() && st.top()=='{')
                {
                    st.pop();
                }
                else{
                    ans=false;
                    break;
                }

                }
            else if(str[i]==']')
            {
                if(!st.empty() && st.top()=='[')
                {
                    st.pop();
                }
                else{
                    ans=false;
                    break;
                }


            }

    }

    if(!st.empty())
    {
        return false;
    }


    return ans;

}
int main()
{
    string str="{([])}";

    if(isBalanced(str)){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }

    return 0;
}

//if only 1 element present return
//else traverse from last and find the index whose element is smaller than i+1 and store its index in variable idx1
//if no element is smaller than next just reverse the array and return
//traverse from last and find just greater element than idx1 element and store in idx2
//swap bot element in idx1 and idx2
//reverse array after idx1

#include<bits/stdc++.h>
using namespace std;

    void nextPermutation(vector<int>& nums) {


        if(nums.size()==1)
        {
            return;
        }

        int idx1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx1=i;
                break;
            }
        }

        if(idx1<0)
        {
            reverse(nums.begin(),nums.end());

        }
        else
        {
            int idx2=0;
            for(int i=nums.size()-1;i>=0;i--)
            {
                if(nums[i]>nums[idx1])
                {
                idx2=i;
                break;
                }
            }


        swap(nums[idx1],nums[idx2]);

        reverse(nums.begin()+idx1+1,nums.end());
        }

        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i];
        }
        }


int main()
{
    vector<int> nums{3,1,2,4};

    nextPermutation(nums);
}

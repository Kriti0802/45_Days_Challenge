#include <bits/stdc++.h>
using namespace std;
// 0(1)
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            // cout<<"i = "<<i<<endl;
            //            0 based indexing
            int ind = abs(nums[i]) - 1;
            // cout<<ind<<" ";
            if (nums[ind] > 0)
            {
                // cout<<"nums[ind]= "<<nums[ind]<<endl;
                nums[ind] *= -1;
            }
            else
            {
                ans.push_back(abs(nums[i]));
            }
        }

        return ans;
    }
};
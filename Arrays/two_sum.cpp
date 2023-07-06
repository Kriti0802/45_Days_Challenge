// better approach
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    // o(n) solution
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                // cout<<mp[target-nums[i]]<<endl;
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};

// or

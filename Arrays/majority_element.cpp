#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size() / 2;

        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            // cout<<"mp= "<<mp[nums[i]]<<endl;
        }
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp[nums[i]] > (n))
            {
                ans = nums[i];
            }
        }
        return ans;
    }
};
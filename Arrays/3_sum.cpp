#include <bits/stdc++.h>
using namespace std;
class Solution
{
    // O(n^2)
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        set<vector<int>> st;

        //         O(n^2) better one
        for (int i = 0; i < nums.size(); i++)
        {
            //             here a set so that after whole iteration it wil be empty
            set<int> hashset;
            for (int j = i + 1; j < nums.size(); j++)
            {
                int third = -(nums[i] + nums[j]);
                if (hashset.find(third) != hashset.end())
                {
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
// optimal
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            //                 3 condition here
            if (sum < 0)
            {
                //
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else if (sum == 0)
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                //                     no need to sort as we have done it earlier
                ans.push_back(temp);
                j++;
                k--;
                // if(nums[i]==nums[j-1])  continue till its not equal keep moving
                while (j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }
                while (j < k && nums[k] == nums[k + 1])
                {
                    //                example 0 2 2 2 2 2->k
                    k--;
                }
            }
        }
    }
    return ans;
}
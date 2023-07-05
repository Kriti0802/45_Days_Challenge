#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        //         O(1) space and O(n)t.c
        int slow = nums[0];
        int fast = nums[nums[0]];

        while (slow != fast)
        {
            // move one step for slow
            slow = nums[slow];
            // move two step for fast
            fast = nums[nums[fast]];
            cout << "s= " << slow << "f= " << fast << endl;
        }
        //         move fast to first element
        fast = 0;
        while (slow != fast)
        {
            // move one step for slow and fast
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

// or

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        //         O(1) space and O(n)t.c
        int slow = nums[0];
        int fast = nums[0];

        do
        {
            // move one step for slow
            slow = nums[slow];
            // move two step for fast
            fast = nums[nums[fast]];
            // cout<<"s= "<<slow<<"f= "<<fast<<endl;

        } while (slow != fast);
        //         move fast to first element
        fast = nums[0];
        while (slow != fast)
        {
            // move one step for slow and fast
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};
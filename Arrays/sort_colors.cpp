#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        //      I'll use dutch national flag algorithm
        //         it uses 3 pointers low,mid,and high
        //         low ans mid is pointing to 0th element and high will point to last element
        //         when mid point to 0 then we swap (a[low],arr[mid])and increment both low and mid
        //         when mid==1 then we'll simply increment mid
        //         when mid==2 then we'll swap with arr[high],arr[mid] and decrement high
        int low = 0, mid = 0;
        int high = nums.size() - 1;

        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
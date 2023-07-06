#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &arr)
    {
        int profit = 0;

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > arr[i - 1])
            {
                profit += (arr[i] - arr[i - 1]);
            }
        }
        return profit;
    }
};
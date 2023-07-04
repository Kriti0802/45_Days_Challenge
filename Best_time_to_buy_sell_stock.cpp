#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        //         O(N) O(1)
        int mini = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < mini)
            {
                mini = prices[i];
            }
            int cost = prices[i] - mini;
            profit = max(profit, cost);
        }
        return profit;
    }
};
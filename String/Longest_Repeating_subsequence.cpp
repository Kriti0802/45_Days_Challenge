#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(int i, int j, string &str, string &ptr, vector<vector<int>> &dp)
    {
        // base case
        if (i < 0 || j < 0)
        {
            return 0;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if (str[i] == ptr[j] && i != j)
        {
            return dp[i][j] = 1 + solve(i - 1, j - 1, str, ptr, dp);
        }
        else
        {
            return dp[i][j] = max(solve(i - 1, j, str, ptr, dp), solve(i, j - 1, str, ptr, dp));
        }
    }
    int LongestRepeatingSubsequence(string str)
    {
        string ptr = str;
        int n = str.length();
        int m = ptr.length();
        vector<vector<int>> dp(n, vector<int>(m + 1, -1));

        return solve(n - 1, m - 1, str, ptr, dp);
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // we here have two condition for adding open and close
    // so we can add open when open<n and increment open pointer
    // and we can add close only when open>close & increment close pointer
    // and when open ==n and close==n then we got string push in ans and return base condn;

    void solve(string curr, int open, int close, int n, vector<string> &ans)
    {
        //         base condition
        if (open == n && close == n)
        {
            ans.push_back(curr);
            return;
        }

        //  for adding open
        if (open < n)
        {
            solve(curr + '(', open + 1, close, n, ans);
        }
        //  for adding close
        if (open > close)
        {
            solve(curr + ')', open, close + 1, n, ans);
        }
    }

    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;

        solve("", 0, 0, n, ans);
        return ans;
    }
};
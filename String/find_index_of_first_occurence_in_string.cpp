#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        unordered_map<char, int> mp;
        int ans = -1;
        for (int i = 0; i < haystack.length(); i++)
        {
            // Check if the current index is a possible match for the needle
            if (haystack.substr(i, needle.length()) == needle)
            {
                ans = i;
                break;
            }
            mp[haystack[i]]++;
            cout << mp[haystack[i]];
        }
        return ans;
    }
};
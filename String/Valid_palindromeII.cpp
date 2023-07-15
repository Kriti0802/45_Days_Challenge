#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool palin(string s, int i, int j)
    {
        while (i < j)
        {
            //             at will check char by char
            if (s.at(i) == s.at(j))
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s)
    {
        int i = 0;
        int j = s.length() - 1;

        while (i < j)
        {
            if (s.at(i) == s.at(j))
            {
                i++;
                j--;
            }
            else
            {
                //                 if not match then we'll skip i and check or skip j and check
                return palin(s, i + 1, j) || palin(s, i, j - 1);
            }
        }
        return true;
    }
};
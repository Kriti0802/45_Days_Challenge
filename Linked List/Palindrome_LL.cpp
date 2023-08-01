#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
class Solution
{
public:
    bool palin(vector<int> &ans)
    {
        int s = 0;
        int e = ans.size() - 1;
        while (s <= e)
        {
            if (ans[s] != ans[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

    bool isPalindrome(ListNode *head)
    {
        vector<int> ans;
        ListNode *temp = head;
        while (temp != NULL)
        {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        if (palin(ans))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
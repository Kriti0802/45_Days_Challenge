#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
// Time Complexity : O(m + n)
// Space Complexity : O(m)
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        unordered_map<ListNode *, int> mp;
        // Traverse the first linked list and store its nodes in the map
        while (headA != NULL)
        {
            mp[headA]++;
            headA = headA->next;
        }
        // Traverse the second linked list and check for the intersection
        while (headB != NULL)
        {
            if (mp.find(headB) != mp.end())
            {
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
    }
};

// best approach
//  2 [TC:O(2n) SC:O(1)
// Loop through both linked lists.
//  As soon as any pointer reaches NULL,
// make it loop through the second linked list. Move each pointer by one node at a time. This covers the difference in size b/w 2 linked list.
//  Loop till both pointers become equal.

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *d1 = headA;
        ListNode *d2 = headB;

        while (d1 != d2)
        {
            if (d1 == NULL)
            {
                d1 = headB;
            }
            else
            {
                d1 = d1->next;
            }

            if (d2 == NULL)
            {
                d2 = headA;
            }
            else
            {
                d2 = d2->next;
            }
        }
        return d1;
    }
};
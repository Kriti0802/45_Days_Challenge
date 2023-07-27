#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *bottom;

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
// first we'' start merging from right two LL
Node *merge(Node *l1, Node *l2)
{
    Node *dummy = new Node(0);
    Node *temp = dummy;

    while (l1 != NULL && l2 != NULL)
    {
        if (l1->data < l2->data)
        {
            temp->bottom = l1;
            l1 = l1->bottom;
        }
        else
        {
            temp->bottom = l2;
            l2 = l2->bottom;
        }
        temp = temp->bottom;
    }
    if (l1 != NULL)
    {
        temp->bottom = l1;
    }
    if (l2 != NULL)
    {
        temp->bottom = l2;
    }
    return dummy->bottom;
}
Node *flatten(Node *root)
{
    if (root == NULL || root->next == NULL)
    {
        return root;
    }

    root->next = flatten(root->next);
    // merge into one
    root = merge(root, root->next);

    return root;
}

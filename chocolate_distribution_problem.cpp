#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        // code
        sort(a.begin(), a.end());
        long long minn = INT_MAX;
        for (long long i = 0; i + m - 1 < n; i++)
        {
            // cout<<"i= "<<i<<endl;
            // cout<<"am= "<<a[i+m-1]<<"a[i= "<<a[i]<<endl;
            if ((a[i + m - 1] - a[i]) < minn)
            {
                minn = a[i + m - 1] - a[i];
                // cout<<"m= "<<minn<<endl;
            }
        }
        return minn;
    }
};
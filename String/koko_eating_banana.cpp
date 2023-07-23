#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findmax(vector<int>& piles)
    {
        int maxx=INT_MIN;
        for(int i=0;i<piles.size();i++)
        {
            maxx=max(maxx,piles[i]);
        }
        return maxx;
    }
    double findtotal(vector<int>& piles,int h)
    {
        double total=0;
        for(int i=0;i<piles.size();i++)
        {
            total+=ceil((double)piles[i]/(double)h);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=findmax(piles);
        int mid=0;
        double totalhr=0; // Change the data type to double
        int ans=INT_MAX;
        while(low<=high)
        {
            mid=(low+high)/2;
            totalhr=findtotal(piles,mid);
            if(totalhr<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

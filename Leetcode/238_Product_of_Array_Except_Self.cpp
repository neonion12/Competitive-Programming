#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n, 1);
        int pr=1,po=1;
        for(int i=0;i<n;i++)
        {
            a[i]=pr;
            pr*=nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            a[i]*=po;
            po*=nums[i];
        }
        return a;
    }
};
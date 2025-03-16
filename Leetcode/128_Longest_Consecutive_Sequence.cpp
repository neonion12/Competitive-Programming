#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        long long int ans=1,curr=1;
        for(int i=1;i<nums.size();i++)
        {
             if (nums[i] == nums[i - 1]) {
                continue;
            }

            if(nums[i]-1==nums[i-1])
            {
                curr++;
            }
            else{
                if(ans<curr)
                {
                    ans=curr;
                }
                curr=1;
            }

        }
        ans=max(ans,curr);
        return ans;
    }
};

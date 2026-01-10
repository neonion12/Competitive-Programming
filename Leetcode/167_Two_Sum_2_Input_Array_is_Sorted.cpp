#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            unordered_map<int, int> u;
            for(int i=0;i<numbers.size();i++){
                if(u.find(target-numbers[i])==u.end()){
                    u[numbers[i]]=i;
                }
                else{
                    return vector<int>{u[target-numbers[i]]+1,i+1};
                }
            }
            return {};
        }
    };
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        unordered_map<string,vector<string>>m;
        int n=a.size();
        for(int i=0;i<n;i++){
            string s=a[i];
            sort(s.begin(),s.end());
            m[s].push_back(a[i]);
        }
        vector<vector<string>>ans;
        for( auto e : m){
            ans.push_back(e.second);
        }
        return ans;
    }
};
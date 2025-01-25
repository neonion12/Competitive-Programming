#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        if (k == n.size()) {
            return n;
        }
        unordered_map<int, int> umap;
        for (int i = 0; i < n.size(); i++) {
            umap[n[i]]++;
        }
        vector<pair<int, int>> freqVec(umap.begin(), umap.end());

        // Step 3: Sort by the second element in descending order
        sort(freqVec.begin(), freqVec.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second; // Descending order
             });

        // Step 4: Collect the top k frequent elements
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(freqVec[i].first);
        }

        return result;
    }
};
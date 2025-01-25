#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int a[26]={0};

        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }

        for(int j=0;j<26;j++){
            if(a[j]!=0){
                return false;
            }
        }
        return true;
    }
};
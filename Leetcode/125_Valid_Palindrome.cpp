#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPalindrome(string s) {
            long long l = 0, r = s.length() - 1;
            while (l < r) {
                // Check if s[l] is not alphanumeric, if so, skip it
                if (!(isalnum(s[l]))) {
                    l++;
                }
                // Check if s[r] is not alphanumeric, if so, skip it
                else if (!(isalnum(s[r]))) {
                    r--;
                }
                // Compare characters at l and r (after converting to lowercase)
                else if (tolower(s[l]) == tolower(s[r])) {
                    l++;
                    r--;
                }
                else {
                    return false;
                }
            }
            return true;
        }
    };
    
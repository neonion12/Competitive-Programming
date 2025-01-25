#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a,b,c,x,y,z,count=0,n,m,tc;

/*Declare a Map , take input from a string and store the frequency of all the dintinct character of that string , sort a map by second value , check which character have least frequency and which one have most frequency
map<char,int> M;
for(char c : s)
{
M[c]++;
}
vector<pair<char,int>> freqV(M.begin(),M.end());
sort(freqV.begin(),freqV.end(),[](const auto& a, const auto& b){
return a.second < b.second;
});
char minChar = freqV.front().first;
char maxChar = freqV.back().first;*/

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--){
         ll n;
        cin >> n; // Input the number of strings
        
        string a[n]; // Array to store n strings
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Input each string
        }

        vector<pair<ll, ll>> v; // Vector to store pairs of (index, sum of '1's)

        for (int i = 0; i < n; i++) {
            string s = a[i];  // Access the i-th string correctly
            ll sum = 0;
            // Count the number of '1's in the string
            for (int j = 0; j < n; j++) {
                if (s[j] == '1') {
                    sum++;
                }
            }
            // Store the 1-based index and the sum in the vector
            v.push_back(make_pair(i + 1, sum));
        }

         sort(v.begin(), v.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
            if (a.second == b.second) {
                return a.first > b.first; // Larger first element comes first if sums are the same
            }
            return a.second < b.second; // Sort by sum (second element) in ascending order
        });

        // Print the vector of pairs
        for (const auto& p : v) {
            cout << p.first <<" ";
        }
        cout<<endl;
    }          
  return 0 ; 
}
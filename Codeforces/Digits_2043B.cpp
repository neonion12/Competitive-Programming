#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a, b, c, d, x, y, z, count = 0, n, m, tc;

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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while (tc--)
    {
        cin >> n >> d;
        cout << "1";
        if (d % 3 == 0 || n >= 3)
            cout << " 3";
        if (d == 5)
            cout << " 5";
        if (d == 7 || n >= 3)
            cout << " 7";
        if (d == 9 || n >= 6 || (d % 3 == 0 && n >= 3))
            cout << " 9";
        cout << endl;
    }
    return 0;
}
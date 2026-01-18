#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s, q;
        cin >> s;
        int n = s.size();
        bool r = 0;
        for (int i(0), k(0); i < n - 1; ++i)
        {
            k += (s[i] == '(' ? 1 : -1);
            if (k == 0)
                r = 1;
        }
        cout << (r ? "YES" : "NO") << endl;
    }
}
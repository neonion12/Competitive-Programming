#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, k, m;
        cin >> n1;
        int n2 = n1 / 2;
        m = n2;
        n1 = n1 - n2;
        while (n1 > 1 || n2 > 1)
        {
            k = n2 / 2;
            m=m+k;
            n2 = n2 - k;
            k = n1 / 2;
            m=m+k;
            n1 = n1 - k;
            n2 = n2 + k;
            if(n1==1 && n2==1)
            {
                break;
            }
        }
        m=m+1;
        cout << m << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,z=0,mo=0;cin>>n;
        while(n--){
            cin>>m;
            if(m==0){
                z++;
            }
            else if(m==-1){
                mo++;
            }
        }
        if(mo%2==0){
            cout<<z<<endl;
        }
        else{
            cout<<z+2<<endl;
        }
    }
}
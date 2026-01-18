#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,x,y=0;cin>>t;
    while(t--){
        string s;cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                y++;
            }
        }
        cout<<y<<endl;
        y=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                cout<<(s[i]-'0')*pow(10,(s.length()-1-i))<<" ";

            }
        }
        cout<<endl;
    }
}
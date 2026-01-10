#include<bits/stdc++.h>
using namespace std;
int main (){

long long int t,i,p,j,w,k,n,r,x,q,kib,l,z,y,f,g,d,h;
set<long long int>s1;
char c;
string s;
map<long long int,long long int>m;
cin>>t;
while(t--){
cin>>n;
 vector<long long int>v; for(i=1;i<=n;++i){ v.push_back(i);   }




r=0; x=0; for(i=1;i<=n;++i){ if(m[i]!=1){ if(r==1){  r=0; ++m[i]; ++x; if(x==n){break; } } else{cout<<i<<" "; r=1; } }  if(i==n){i=0; cout<<endl; }  }

m.clear();
          }
}
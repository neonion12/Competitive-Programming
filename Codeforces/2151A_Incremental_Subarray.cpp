#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main() {
	int t; cin>>t;
	while(t--){
	    int n,m; cin>>n>>m;
	    for(int i=1;i<=m;i++){
	        cin>>a[i];
	    }
	    if(a[m]-a[1]==m-1){
	        cout<<n-a[m]+1<<endl;
	    }
	    else{
	        cout<<1<<endl;
	    }
	}

}

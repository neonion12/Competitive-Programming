#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    if(s[0] >= '5' && s[0]!='9') s[0] = '9' - (s[0]-'0');

    for(int i=1;i<s.size();i++){
        if(s[i] >= '5') s[i] = '9' - (s[i]-'0');
    }

    cout << s;
}

/*
#include <bits/stdc++.h>
using namespace std;

signed main() {
	string s; cin >> s;
	for (char& c : s) c = min(c, char('9' - c + '0'));
	if (s[0] == '0') s[0] = '9';
	cout << s;
}
*/
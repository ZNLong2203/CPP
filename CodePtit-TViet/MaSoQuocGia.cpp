#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='0' && s[i+1]=='8' && s[i+2]=='4') {
			i+=2;
		}	else cout << s[i];
	}	
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
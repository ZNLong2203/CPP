#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	scanf("\n");
	getline(cin,s);
	int n = 0;
	int cnt = 0, dot = 0;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='.') {
			dot++;
			continue;
		}
		n=n*10+s[i]-'0';
		cnt++;
		if(cnt==3) {
			if(n>255) {
				cout << "NO\n";
				return;
			}
			cnt=0;
			n=0;
		}
	}	
	if(dot==3) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
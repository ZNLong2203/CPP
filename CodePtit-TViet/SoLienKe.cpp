#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	for(int i=0;i+1<s.size();i++) {
		if((s[i]-'0')-(s[i+1]-'0')!=1 && (s[i]-'0')-(s[i+1]-'0')!=-1 ) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
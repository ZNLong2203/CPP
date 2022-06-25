#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	for(int i=0;i<=s.size()/2;i++) {
		if((s[i]-'0')%2==0 && (s[s.size()-i-1]-'0')%2==0) {
			if((s[i]-'0')!=(s[s.size()-i-1]-'0')) {
				cout << "NO\n";
				return;
			} 
		}	else {
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
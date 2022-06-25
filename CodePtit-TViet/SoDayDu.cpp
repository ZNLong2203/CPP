#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int a[10000]={0};
	if(s[0]-'0'==0) {
		cout << "INVALID\n";
		return;
	}
	for(int i=0;i<s.size();i++) {
		if(isalpha(s[i])) {
			cout << "INVALID\n";
			return;
		}	else a[s[i]-'0']++;
	}
	for(int i=0;i<=9;i++) {
		if(a[i]==0) {
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
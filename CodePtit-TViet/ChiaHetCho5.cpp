#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	if(s[s.size()-1]=='5' && s[s.size()-1]=='0') cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
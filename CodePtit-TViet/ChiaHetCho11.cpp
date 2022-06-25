#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	ll sum = 0;
	for(int i=0;i<s.size();i++) {
		if(i%2==0) sum+=(s[i]-'0');
		else sum-=(s[i]-'0');
	}
	if(sum%11==0) cout << "1\n";
	else cout << "0\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
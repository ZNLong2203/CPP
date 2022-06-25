#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	ll n;
	cin >> s >> n;
	ll cnt = 0;
	set<char> se;
	for(int i=0;i<s.size();i++) {
		for(int j=i;j<s.size();j++) {
			se.insert(s[j]);
			if(se.size()==n) cnt++;
			if(se.size()>n) break;
		}
		se.clear();
	}	
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
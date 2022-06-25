#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	map<ll,ll> mp;
	set<ll> se;
	int cnt = 0;
	for(int i=0;i<n;i++) {
		se.clear();
		for(int j=0;j<n;j++) {
			ll x; cin >> x;
			se.insert(x);
		}
		for(auto x:se) {
			mp[x]++;
			if(mp[x]==n) cnt++;
		}
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
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,k;
	cin >> n >> k;
	map<ll,ll> mp;
	vector<ll> v(n);
	for(int i=0;i<n;i++) {
		cin >> v[i];
		mp[v[i]]++;
	}
	if(mp[k]!=0) cout << mp[k] << endl;
	else cout << "-1\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
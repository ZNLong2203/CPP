#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n;
	cin >> n;
	vector<ll> v(n);
	set<ll> se;
	ll xet = 0;
	for(int i=0;i<n;i++) cin >> v[i];
	for(int i=0;i<n;i++) {
		while(v[i]>0) {
			xet = v[i]%10;
			se.insert(xet);
			v[i]/=10;
		}
	}
	for(auto x:se) cout << x << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
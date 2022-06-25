#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	int cnt = 0;
	for(int i=0;i<n;i++) {
		auto it1 = lower_bound(v.begin()+i+1,v.end(),k-v[i]);
		auto it2 = lower_bound(v.begin()+i+1,v.end(),k-v[i]+1);
		if(*it1==k-v[i]) {
			cnt+=it2-it1;
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
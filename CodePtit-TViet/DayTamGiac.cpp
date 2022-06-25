#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector<ll> v;
		for(ll i=0;i<n;i++) {
			ll x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		cout << v[n-1] << endl;
	}
}
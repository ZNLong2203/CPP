#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9+7;
void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	ll h = 1, kq = 1;
	for(int i=0;i<n;i++) {
		cin >> v[i];
	}
	ll g = v[0];
	h = v[0]%mod;
	for(int i=1;i<n;i++) {
		g = __gcd(g,v[i]);
		h*=v[i];
		h%=mod;
	}	
	h%=mod;
	for(int i=0;i<g;i++) {
		kq*=h;
		kq%=mod;
	}
	kq%=mod;
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
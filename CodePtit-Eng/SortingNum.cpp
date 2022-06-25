#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,k;
	cin >> n >> k;
	vector<ll> v,am,duong;
	int ok = 0;
	ll mx = -100000;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		if(mx<x) mx = x;
		v.push_back(x);
	}
//	for(ll i=0;i<n;i++) {
//		if(mx==v[i] && ok==0) {
//			ok=1;
//			v.insert(i,mx);
//		}
//	}		
	for(int i=0;i<v.size();i++) {
		if(v[i]==mx && ok==0) {
			if(v[i]<0) am.push_back(k);
			else duong.push_back(k);
			ok=1;
		}
		if(v[i]<0) am.push_back(v[i]);
		else duong.push_back(v[i]);
	}
	for(auto x:am) cout << x << " ";
	for(auto x:duong) cout << x << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
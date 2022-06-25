#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<ll> v;
		for(ll i=0;i<n;i++) {
			ll x; cin >> x;
			v.push_back(x);
		}
		int cnt = 0;
		for(ll i=0;i<n;i++) {
			if(v[i]!=0) cout << v[i] << " ";
			else cnt++;
		}
		while(cnt--) cout << "0 ";
		cout << endl;
	}
}
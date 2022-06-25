#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n,x;
		cin >> n >> x;
		vector<ll> v;
		for(int i=0;i<n;i++) {
			ll x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		cout << v[x-1] << endl;
	}
}
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v;
	for(int i=0;i<n;i++) {
		ll x; cin >> x;
		v.push_back(x);
	}	
	ll xet = 0;
	sort(v.begin(),v.end());
	for(int i=0;i<n-2;i++) {
		for(int j=i+1;j<n-1;j++) {
			xet = sqrt((v[i]*v[i]+v[j]*v[j]));
			if(xet*xet == v[i]*v[i] + v[j]*v[j]) {
				if(binary_search(v.begin(),v.end(),xet)) {
					cout << "YES\n";
					return;
				}	
			}
		}
	}
	cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
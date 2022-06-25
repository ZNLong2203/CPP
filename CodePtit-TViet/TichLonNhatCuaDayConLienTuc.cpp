#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}	
	ll product = -100000 , xet = 1;
	for(int i=0;i<n;i++) {
		xet = 1;
		for(int j=i;j<n;j++) {
			xet*=v[j];
			if(xet>product) product = xet; 
		}
	}
	cout << product << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
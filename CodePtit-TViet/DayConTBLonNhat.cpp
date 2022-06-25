#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	ll sw = 0, idx = 0;
	for(int i=0;i<k;i++) {
		sw+=v[i];
	}
	ll kq = sw;
	for(int i=k;i<n;i++) {
		sw-=v[i-k];
		sw+=v[i];
		if(sw>kq) {
			idx = i-k+1;
			kq = sw;
		} 
	}
	for(int i=idx;i<idx+k;i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
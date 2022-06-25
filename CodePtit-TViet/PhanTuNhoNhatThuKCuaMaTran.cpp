#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;
	vector<ll> v(n*n);
	for(int i=0;i<n*n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	cout << v[k-1] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
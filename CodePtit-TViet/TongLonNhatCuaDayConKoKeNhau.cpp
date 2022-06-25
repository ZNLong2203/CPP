#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	ll dp[200005]={0};
	dp[0] = v[0];
	dp[1] = max(v[1],v[0]);
	for(int i=2;i<n;i++) {
		dp[i] = max(dp[i-2]+v[i],dp[i-1]);
	}
	cout << dp[n-1] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
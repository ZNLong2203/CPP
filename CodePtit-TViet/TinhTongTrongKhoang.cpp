#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n,x;
		cin >> n >> x;
		ll dp[100005]={0};
		ll a[100005]={0};
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		dp[0]=a[0];
		for(int i=1;i<n;i++) {
			dp[i]=dp[i-1]+a[i];
		}
		while(x--) {
			ll l,r;
			cin >> l >> r;
			if(l==1) cout << dp[r-1]-0 << endl;
			else cout << dp[r-1] - dp[l-2] << endl;
		}
	}
}
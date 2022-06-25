#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9+7;
void solve() {
	int n,x;
	cin >> n >> x;
	int a[n+5];
	for(int i=n-1;i>=0;i--) {
		cin >> a[i];
	}	
	ll sum = 0, index = 1;
	for(int i=0;i<n;i++) {
		if(i!=0)index*=x;
		index%=mod;
		sum+=index*a[i];
		sum%=mod;
	}
	sum%=mod;
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}

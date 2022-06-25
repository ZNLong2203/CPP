#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,p;
	cin >> n >> p;
	ll cnt = 0;
	ll mn = min(p,n);
	for(ll i=1;i<mn;i++) {
		if((i*i)%p==1) {
			cnt++;
			cnt+=(n-i)/p;
		}
	}	
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v(n-1);
	ll sum = 0;
	for(int i=0;i<n-1;i++) {
		cin >> v[i];
		sum+=v[i];	
	}
	cout << ((n+1)*n)/2 - sum << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}	
}
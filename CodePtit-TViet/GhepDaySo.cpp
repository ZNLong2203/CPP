#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;
	vector<ll> v(n+m);
	for(int i=0;i<n+m;i++) cin >> v[i];
	sort(v.begin(),v.end());
	for(auto x:v) cout << x << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}	
}
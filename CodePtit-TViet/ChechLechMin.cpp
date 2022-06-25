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
	sort(v.begin(),v.end());
	ll mn=100000;
	for(int i=n-1;i>=1;i--) {
		if(mn>v[i]-v[i-1]) mn=v[i]-v[i-1];
	}
	cout << mn << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
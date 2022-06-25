#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	set<ll> se;
	for(int i=0;i<n;i++) {
		cin >> v[i];
		se.insert(v[i]);
	}
	sort(v.begin(),v.end());
	int len = se.size();
	cout << (v[n-1]-v[0]) + 1 - len << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}	
}
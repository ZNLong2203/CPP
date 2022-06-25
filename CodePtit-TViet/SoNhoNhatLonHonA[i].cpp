#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	vector<ll> xet(v.begin(),v.end());
	sort(xet.begin(),xet.end());
	for(int i=0;i<n;i++) {
		auto it = upper_bound(xet.begin(),xet.end(),v[i]);
		if(it!=xet.end()) cout << *it << " ";
		else cout << "_ ";
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
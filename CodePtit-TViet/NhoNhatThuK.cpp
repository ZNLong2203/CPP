#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;
	vector<int> v;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}	
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
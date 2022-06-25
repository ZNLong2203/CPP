#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,k,kq;
	vector<int> v;
	cin >> n >> k;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	for(int i=0;i<n;i++) {
		if(v[i]==k) {
			cout << i+1 << endl;
			return;
		}
	}
	cout << "-1\n";	
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
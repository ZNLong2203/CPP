#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;
	set<int> se1,se2,se3;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		se1.insert(x);
		se2.insert(x);
	}	
	for(int i=0;i<m;i++) {
		int x; cin >> x;
		se2.insert(x);
		if(se1.find(x)!=se1.end()) se3.insert(x);
	}	
	for(auto x:se2) cout << x << " ";
	cout << endl;
	for(auto x:se3) cout << x << " ";
	cout << endl;
}

int main() {
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
}
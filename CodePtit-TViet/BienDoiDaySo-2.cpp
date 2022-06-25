#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v, kq(n);
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	kq[0]=v[0]*v[1];
	kq[n-1]=v[n-1]*v[n-2];
	for(int i=1;i+1<n;i++) {
		kq[i]=v[i-1]*v[i+1];
	}
	for(auto x:kq) cout << x << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
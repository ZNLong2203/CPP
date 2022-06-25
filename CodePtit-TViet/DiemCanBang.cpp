#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int dpa[100005], dpb[100005];
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	dpa[0]=v[0], dpb[n-1]=v[n-1];
	for(int i=1;i<n;i++) {
		dpa[i]=dpa[i-1]+v[i];
	}
	for(int i=n-2;i>=0;i--) {
		dpb[i]=dpb[i+1]+v[i];
	}
	for(int i=0;i+2<n;i++) {
		if(dpa[i]==dpb[i+2]) {
			cout << i+2 << endl;
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
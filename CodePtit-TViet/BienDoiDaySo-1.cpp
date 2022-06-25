#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	int l=0, r=n-1, cnt=0;
	while(l<=r) {
		if(v[l]==v[r]) {
			l++;
			r--;
		}	else if(v[l]<v[r]) {
			l++;
			v[l]+=v[l-1];
			cnt++;
		}	else {
			r--;
			v[r]+=v[r+1];
			cnt++;
		}
	}
	cout << cnt << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
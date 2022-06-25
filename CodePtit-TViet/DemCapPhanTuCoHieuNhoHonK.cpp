#include<bits/stdc++.h>
#define ll long long
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
	long long cnt = 0;
	for(int i=0;i<n-1;i++) {
		auto it = upper_bound(v.begin(),v.end(),v[i]+k-1);
		cnt+=(it-v.begin())-i-1;
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
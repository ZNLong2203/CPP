#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}	
	ll mn1 = v[0], mn2 = v[0];
	for(int i=1;i<n;i++) {
		if(v[i]<mn1) {
			mn2=mn1;
			mn1=v[i];
		}	else if(v[i]<mn2 && v[i]>mn1) {
			mn2=v[i];
		}
	}
	if(mn1==mn2) cout << "-1\n";
	else cout << mn1 << " " << mn2 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;
	int index = n;
	vector<int> v;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
		if(v[i]<v[i-1]) index = i;
	}	
	auto it1 = lower_bound(v.begin(),v.begin()+index,k);
	if(it1!=v.begin()+index && *it1==k) {
		cout << it1-v.begin() + 1 << endl;
		return;
	}
	auto it2 = lower_bound(v.begin()+index,v.end(),k);
	if(it2!=v.end() && *it2==k) {
		cout << it2-(v.begin()+index) + 1 + index << endl;
		return;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
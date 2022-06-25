#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> v,int m,int solon) {
	sort(v.begin(),v.end());
	auto it = lower_bound(v.begin(),v.end(),solon);
	int index = it - v.begin();
	v.insert(v.begin()+index,m);
	for(auto x:v) {
		cout << x << " ";
	}
	cout << endl;
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		int solon = -100000;
		vector<int> v;
		for(int i=0;i<n;i++) {
			int x; cin >> x;
			v.push_back(x);
			solon = max(solon,x);
		}
		solve(v,m,solon);
	}
}
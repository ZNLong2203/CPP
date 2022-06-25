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
	int sum = 10000, kq = 0;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(sum>abs(v[i]+v[j])) {
				kq = v[i]+v[j];
				sum = abs(v[i]+v[j]);
			}
		}
	}
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
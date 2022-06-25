#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1(n), v2(n);
	for(int i=0;i<n;i++) {
		cin >> v1[i];
	}
	sort(v1.begin(),v1.end());
	int idx = 0;
	for(int i=0;i<n;i+=2) v2[i] = v1[idx++];
	for(int i=1;i<n;i+=2) v2[i] = v1[idx++];
	for(int i=0;i<n;i++) cout << v2[i] << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
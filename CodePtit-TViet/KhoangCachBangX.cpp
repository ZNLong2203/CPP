#include<bits/stdc++.h>
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
	for(int i=0;i<n;i++) {
		if(binary_search(v.begin(),v.end(),k+v[i])) {
			cout << "1\n";
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
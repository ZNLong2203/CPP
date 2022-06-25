#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	for(int i=0;i<=(1 << n)-1;i++) {
		for(int j=0;j<n;j++) {
			if(i & (1 << j)) cout << 1;
			else cout << 0;
		}
		cout << " ";
	}	
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
#include<bits/stdc++.h>
using namespace std;

int check(int n) {
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) return 0;
	}
	if(n>=2) return 1;
	else return 0;
}

void solve() {
	int n;
	cin >> n;
	for(int i=2;i<=n/2;i++) {
		if(check(i)) {
			if(check(n-i)) {
				cout << i << " " << n-i << endl;
				return;
			}
		}			
	}
	cout << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
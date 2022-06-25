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
	for(int i=2;i<=sqrt(n)+100;i++) {
		if(check(i)) {
			if(check(n-i) && (n-1)>1) {
				cout << i << " " << n-i << endl;
				return;
			}
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
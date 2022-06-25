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
	int cnt = 0;
	for(int i=1;i<n;i++) {
		if(__gcd(i,n)==1) cnt++;
	}	
	if(check(cnt)) cout << "1\n";
	else cout << "0\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
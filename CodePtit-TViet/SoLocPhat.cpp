#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,xet;
	cin >> n;
	while(n>0) {
		xet = n%10;
		if(xet!=0 && xet!=6 && xet!=8) {
			cout << "NO\n";
			return;
		}
		n/=10;
	}
	cout << "YES\n";
}
int main() {
	int t;
	cin >> t;
	while(t--) solve();
}
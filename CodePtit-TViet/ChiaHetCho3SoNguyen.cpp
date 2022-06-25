#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll x,y,z,n;
	cin >> x >> y >> z >> n;
	ll lcm = x*y/__gcd(x,y);
	lcm = lcm*z/__gcd(lcm,z);
	ll res = pow(10,n-1);
	ll kq = ((res+lcm)/lcm)*lcm;
	if(kq<pow(10,n)) cout << kq << endl;
	else cout << "-1\n";	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
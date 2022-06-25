#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		ll lcm = 1;
		cin >> n;
		for(ll i=2;i<=n;i++) lcm=lcm*i/__gcd(lcm,i);
		cout << lcm << endl;
	}
}
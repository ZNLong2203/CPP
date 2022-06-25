#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,m;
		cin >> n >> m;
		cout << n*m/__gcd(n,m) << " " << __gcd(n,m) << endl;		
	}
}

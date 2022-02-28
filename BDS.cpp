#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long x,y,;
		cin >> x >> y;
		while(x%2==0) {
			x/=2;
		}
		while(x%3==0) {
			x/=3;
		}
		while(y%2==0) {
			y/=2;
		}
		while(y%3==0) {
			y/=3;
		}
		if(x==y) {
			cout << "YES" << endl;
		}	else cout << "NO" << endl;
	}
	return 0;
}

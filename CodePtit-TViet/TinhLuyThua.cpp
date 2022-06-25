#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll x,y,p;
		cin >> x >> y >> p;
		ll kq = 1;
		for(int i=1;i<=y;i++) {
			kq*=x;
			kq%=p;
		}
		cout << kq%p << endl;
	}
}
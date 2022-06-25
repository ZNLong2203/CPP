#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,p;
	cin >> n >> p;
	ll uoc = 0;
	for(int i=1;i<=32;i++) {
		if(pow(p,i) <= n) uoc+=(n/pow(p,i));
		else break;
	}
	cout << uoc << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
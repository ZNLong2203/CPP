#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	int mx = 0;
	for(int i=0;i<n;i++) {
		for(int j=n-1;j>=i+1+mx;j--) {
			if(v[j]>=v[i]) {
				if(mx<(j-i)) mx = j-i;
				break;
			}
		}
	}
	cout << mx << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}	
}
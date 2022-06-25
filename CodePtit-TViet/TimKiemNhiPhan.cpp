#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	if(binary_search(v.begin(),v.end(),k)) cout << "1\n";
	else cout << "-1\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}	
}
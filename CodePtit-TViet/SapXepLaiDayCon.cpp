#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v1(n), v2(n);
	for(int i=0;i<n;i++) cin >> v1[i];
	v2=v1;
	sort(v2.begin(),v2.end());
	for(int i=0;i<n;i++) {
		if(v1[i]!=v2[i]) {
			cout << i+1 << " ";
			break;
		}
	}	
	for(int i=n-1;i>=0;i--) {
		if(v1[i]!=v2[i]) {
			cout << i+1 << " ";
			break;
		}
	}	
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
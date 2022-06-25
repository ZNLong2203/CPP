#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	int cnt1 = n-1, cnt2 = 0;
	for(int i=0;i<n;i++) {
		if(i%2==0) {
			cout << v[cnt1] << " ";
			cnt1--;
		} else {
			cout << v[cnt2] << " ";
			cnt2++;
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
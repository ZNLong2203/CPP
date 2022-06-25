#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int>	v;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	ll sum = 0, kq = -1000000;
	for(int i=0;i<n;i++) {
		sum+=v[i];
		if(sum>kq) kq = sum;
		if(sum<0) {
			sum = 0;
		}
	}
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
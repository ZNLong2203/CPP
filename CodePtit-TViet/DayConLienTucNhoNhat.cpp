#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	int l=0, r=0;
	int cnt=0, kq=100000;
	ll sum = 0, ok=0;
	while(l<n && r<n) {
		if(sum<=k) {
			sum+=v[r];
			r++;
			cnt++;
		}	else {
			if(cnt<kq) kq=cnt;
			sum-=v[l];
			l++;
			cnt--;
			ok=1;
		}
	}
	if(ok==1) cout << kq << endl;
	else cout << "-1\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
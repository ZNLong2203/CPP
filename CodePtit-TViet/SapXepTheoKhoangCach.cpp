#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
	return a.second < b.second;	
}

void solve() {
	int n,k;
	cin >> n >> k;
	pair<ll,ll> a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i].first;
		a[i].second = abs(k-a[i].first);
	}
	stable_sort(a,a+n,cmp);
	for(int i=0;i<n;i++) {
		cout << a[i].first << " ";
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
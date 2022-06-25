#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,m,l;
	cin >> n >> m >> l;
	int a[n+5][m+5]={0};
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			cin >> a[i][j];
			a[i][j]+=a[i-1][j] + a[i][j-1] - a[i-1][j-1];
		}
	}	
	ll chia = l*l;
	for(int i=1;i<=n-(l-1);i++) {
		for(int j=1;j<=m-(l-1);j++) {
			cout << (a[i+l-1][j+l-1] + a[i-1][j-1] - a[i+l-1][j-1] - a[i-1][j+l-1]) / chia << " ";
		}
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
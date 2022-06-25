#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	int a[200][200]={0};
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) cin >> a[i][j];
	}
	int m; cin >> m;
	int b[200][200]={0};
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=m;j++) cin >> b[i][j];
	}
	int ni = 0, nj = 0;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(i%m!=0) ni = i%m;
			else ni = m;
			if(j%m!=0) nj = j%m;
			else nj = m;
			a[i][j] = a[i][j] * b[ni][nj];
		}
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	solve();
}
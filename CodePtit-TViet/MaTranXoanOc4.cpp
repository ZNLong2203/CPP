#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<ll> v(n*n);
	for(int i=0;i<n*n;i++) cin >> v[i];
	sort(v.begin(),v.end());
	int a[200][200]={0};
	int cnt = 0;
	int row = 0, col = 0 , m = n;
	int k = n;
	while(row<n && col<m) {
		for(int i=col;i<m;i++) {
			a[row][i] = v[cnt];
			cnt++;
		}
		row++;
		for(int i=row;i<n;i++) {
			a[i][m-1] = v[cnt];
			cnt++;
		}
		m--;
		for(int i=m-1;i>=col;i--) {
			a[n-1][i] = v[cnt];
			cnt++;
		}
		n--;
		for(int i=n-1;i>=row;i--) {
			a[i][col] = v[cnt];
			cnt++;
		}
		col++;
	}
	for(int i=0;i<k;i++) {
		for(int j=0;j<k;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	solve();
}
#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;
	int a[200][200]={0};
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin >> a[i][j];
		}
	}	
	int in = n, im = m;
	int row = 0, col = 0, tmp = a[row][col], luu = 0;
	while(row<n && col<m) {
		tmp = a[row][col];
		for(int i=col+1;i<m;i++) {
			luu = a[row][i];
			a[row][i] = tmp;
			tmp = luu;
		}
//		cout << tmp;
		for(int i=row+1;i<n;i++) {
			luu = a[i][n-1];
			a[i][n-1] = tmp;
			tmp = luu;
		}
//			cout << tmp;
		for(int i=m-2;i>=col;i--) {
			luu = a[n-1][i];
			a[n-1][i] = tmp;
			tmp = luu;
		}
//			cout << tmp;
		for(int i=n-2;i>=row;i--) {
			luu = a[i][row];
			a[i][row] = tmp;
			tmp = luu;
		}
//			cout << tmp;
		n--;
		m--;
		row++;
		col++;
	}
	for(int i=0;i<in;i++) {
		for(int j=0;j<im;j++) {
			cout << a[i][j] << " ";
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
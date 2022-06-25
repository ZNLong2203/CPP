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
	int cnt = 0, row = 0, col = 0;
	for(int i=0;i<m;i++) {
		if(cnt%2==0) {
			row = i;
			col = 0;
			while(row>=0 && col>=0 && row<n && col<m) {
				cout << a[row][col] << " ";
				row--;
				col++;
			}
		}	else {
			row = 0;
			col = i;
			while(row>=0 && col>=0 && row<n && col<m) {
				cout << a[row][col] << " ";
				row++;
				col--;
			}
		}
		cnt++;
	}
	for(int i=1;i<n;i++) {
		if(cnt%2==0) {
			row = m-1;
			col = i;
			while(row>=0 && col>=0 && row<n && col<m) {
				cout << a[row][col] << " ";
				row--;
				col++;
			}
		}	else {
			row = i;
			col = m-1;
			while(row>=0 && col>=0 && row<n && col<m) {
				cout << a[row][col] << " ";
				row++;
				col--;
			}
		}
		cnt++;
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
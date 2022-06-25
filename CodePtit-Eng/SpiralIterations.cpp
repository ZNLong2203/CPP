#include<bits/stdc++.h>
using namespace std;

int work(int a[200][200],int n,int m,int k) {
	int row=0,col=0;
	int check=0;
	while(row!=n && col!=m) {
		for(int i=col;i<m;i++) {
			check++;
			if(check==k) {
				return a[row][i];
			}
		}
		row++;
		for(int i=row;i<n;i++) {
			check++;
			if(check==k) {
				return a[i][m-1];
			}
		}
		m--;
		for(int i=m-1;i>=col;i--) {
			check++;
			if(check==k) {
				return a[n-1][i];
			}
		}
		n--;
		for(int i=n-1;i>=row;i--) {
			check++;
			if(check==k) {
				return a[i][col];
			}
		}
		col++;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m,k;
		cin >> n >> m >> k;
		int a[200][200];
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin >> a[i][j];
			}
		}
		cout << work(a,n,m,k) << endl;
	}
}
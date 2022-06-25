#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m,prev,curr;
		cin >> n >> m;
		int a[200][200];
		int hang=n,cot=n;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin >> a[i][j];
			}
		}
		int row=0,col=0;
		while(row < n && col < m) {
			if(row+1==n || col+1==m) {
				break;
			}
			prev=a[row+1][col];
			for(int i=col;i<m;i++) {
				curr=a[row][i];
				a[row][i]=prev;
				prev=curr;
			}
			row++;
			for(int i=row;i<n;i++) {
				curr=a[i][m-1];
				a[i][m-1]=prev;
				prev=curr;
			}
			m--;
			for(int i=m-1;i>=col;i--) {
				curr=a[n-1][i];
				a[n-1][i]=prev;
				prev=curr;
			}
			n--;
			for(int i=n-1;i>=row;i--) {
				curr=a[i][col];
				a[i][col]=prev;
				prev=curr;
			}
			col++;
		}
		for(int i=0;i<hang;i++) {
			for(int j=0;j<cot;j++) {
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}
}
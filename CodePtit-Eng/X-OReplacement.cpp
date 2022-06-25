#include<bits/stdc++.h>
using namespace std;

void work(char a[200][200],int n,int m) {
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(a[i][j]=='O') {
				if(a[i-1][j]=='X' && a[i+1][j]=='X' && a[i][j-1]=='X' && a[i][j+1]=='X') {
					a[i][j]='X';
				}
			}
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cout << a[i][j] << " " ;
		}
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		char a[200][200];
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin >> a[i][j];
			}
		}
		work(a,n,m);
	}
}
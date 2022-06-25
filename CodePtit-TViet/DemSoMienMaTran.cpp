#include<bits/stdc++.h>
using namespace std;

int a[200][200]={0};
int n,m;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};

void move(int i,int j) {
	a[i][j]=0;
	for(int k=0;k<8;k++) {
		int ni = i+dx[k];
		int nj = j+dy[k];
		while(ni>=1 && nj>=1 && ni<=n && nj<=m && a[ni][nj]==1) {
			move(ni,nj);
		}
	}	
}

void solve() {
	cin >> n >> m;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			if(a[i][j]==1) {
				move(i,j);
				cnt++;
//				cout << i << " " << j << " ";
			}
		}
	}
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
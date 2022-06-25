#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,m;
char a[105][105];
int visited[105][105];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void dfs(int i,int j) {
	if(i<0 || j<0 || i==n || j==m) return;
	if(a[i][j]=='X') return;
	if(visited[i][j]==1) return;
	visited[i][j]=1;
	for(int k=0;k<4;k++) {
		dfs(i+dx[k],j+dy[k]);
	}	
}

void horizontal() {
	for(int i=0;i<m;i++) {
		if(a[0][i]=='O') dfs(0,i);
		if(a[n-1][i]=='O') dfs(n-1,i); 
	}	
}

void vertical() {
	for(int i=0;i<n;i++) {
		if(a[i][0]=='O') dfs(i,0);
		if(a[i][m-1]=='O') dfs(i,m-1); 
	}	
}

void solve() {
	cin >> n >> m;
	memset(visited, 0 , sizeof(visited));
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin >> a[i][j];
		}
	}
	horizontal();
	vertical();
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(visited[i][j]==1) cout << "O ";
			else cout << "X ";
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

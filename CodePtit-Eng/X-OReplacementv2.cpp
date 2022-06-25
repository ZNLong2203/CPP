#include<bits/stdc++.h>
using namespace std;

bool visited[105][105];
char arr[105][105];

int n,m;
int rowdir[] = {1,0,-1,0};
int coldir[] = {0,1,0,-1};

void dfs(int i,int j) {
	if(i<0 || j<0 || i==n || j==m) return;
	if(arr[i][j]=='X') return;
	if(visited[i][j]==1) return;
	visited[i][j] = 1;
	for(int k=0;k<4;k++) {
		dfs(i+rowdir[k], j+coldir[k]);
	}
}

void vertical() {
	for(int i=0;i<n;i++) {
		if(arr[i][0]=='O') dfs(i,0);
		if(arr[i][m-1]=='O') dfs(i,m-1);
	}	
}

void horizontal() {
	for(int i=0;i<m;i++) {
		if(arr[0][i]=='O') dfs(0,i);
		if(arr[n-1][i]=='O') dfs(n-1,i);
	}	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		memset(visited, 0 , sizeof(visited));
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin >> arr[i][j];
			}
		}
		vertical();
		horizontal();	
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				if(visited[i][j]==1) cout << "O ";
				else cout << "X ";
			}
			cout << endl;
		}
	}
}
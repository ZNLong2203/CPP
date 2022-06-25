#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[100][100]={0};
	int count = 1, row = 1;
	for(int i=n;i>=1;i--) {
		int col = i;
		while(col>=1 && row>=1 && col<=n && row<=n) {
			a[row][col]=count;
			count++;
			row++;
			col++;
		}
		row=1;
	}
	int col = 1;
	for(int i=2;i<=n;i++) {
		int row = i;
		while(col>=1 && row>=1 && col<=n && row<=n) {
			a[row][col]=count;
			count++;
			row++;
			col++;
		}
		col=1;
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
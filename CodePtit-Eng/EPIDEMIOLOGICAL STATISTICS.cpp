#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	int a[200][200]={0};
	int luu[200][200]={0};
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			cin >> a[i][j];
		}
	}
	int sum = 0;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			if(a[i][j]==-1) {
				if(luu[i+1][j]==0) {
					luu[i+1][j]=1;
					sum+=a[i+1][j];
				}
				if(luu[i-1][j]==0) {
					luu[i-1][j]=1;
					sum+=a[i-1][j];
				}
				if(luu[i][j-1]==0) {
					luu[i][j-1]=1;
					sum+=a[i][j-1];
				}
				if(luu[i][j+1]==0) {
					luu[i][j+1]=1;
					sum+=a[i][j+1];
				}
				if(luu[i+1][j+1]==0) {
					luu[i+1][j+1]=1;
					sum+=a[i+1][j+1];
				}
				if(luu[i-1][j-1]==0) {
					luu[i-1][j-1]=1;
					sum+=a[i-1][j-1];
				}
				if(luu[i-1][j+1]==0) {
					luu[i-1][j+1]=1;
					sum+=a[i-1][j+1];
				}
				if(luu[i+1][j-1]==0) {
					luu[i+1][j-1]=1;
					sum+=a[i+1][j-1];
				}
			}
		}
	}
	cout << sum << endl;
}
#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;
	int a[n][m]={0} , b[3][3]={0};	
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin >> a[i][j];
		}
	}
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			cin >> b[i][j];
		}
	}
	long long sum = 0;
	for(int i=0;i<n-2;i++) {
		for(int j=0;j<m-2;j++) {
			for(int k=0;k<3;k++) {
				for(int s=0;s<3;s++) {
					sum+=a[i+k][j+s]*b[k][s];
				}
			}
		}
	}
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
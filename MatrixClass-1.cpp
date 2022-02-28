#include<bits/stdc++.h>
using namespace std;

class Matrix {
	public:
		int n,m;
		int a[200][200];
		int b[200][200];
		int c[200][200];
		void input() {
			cin >> n >> m;
			for(int i=0;i<n;i++) {
				for(int j=0;j<m;j++) {
					cin >> a[i][j];
					b[j][i]=a[i][j];
				}
			}
		}
};

int main() {
	int t;
	cin >> t;
	while(t--) {
		Matrix mx;
		mx.input();
		for(int i=0;i<mx.n;i++) {
			for(int j=0;j<mx.n;j++) {
				long long tich=0;
				long long sum = 0;
				for(int k=0;k<mx.m;k++) {
					tich=(mx.a[i][k]*mx.b[k][j]);
					sum+=tich;
				}
				mx.c[i][j]=sum;
			}
		}
		for(int i=0;i<mx.n;i++) {
			for(int j=0;j<mx.n;j++) {
				cout << mx.c[i][j] << " ";
			}
			cout << endl;
		}
	}
}
#include<bits/stdc++.h>
using namespace std;

class Matrix {
	public:
		int n,m,p;
		int a[200][200];
		int b[200][200];
		int c[200][200];
		void input() {
			cin >> n >> m >> p;
			for(int i=0;i<n;i++) {
				for(int j=0;j<m;j++) {
					cin >> a[i][j];
				}
			}
			for(int i=0;i<m;i++) {
				for(int j=0;j<p;j++) {
					cin >> b[i][j];
				}
			}
		}
};

int main() {
	Matrix mx;
	mx.input();
	int sum=0;
	for(int i=0;i<mx.n;i++) {
		for(int j=0;j<mx.p;j++) {
			sum=0;
			for(int k=0;k<mx.m;k++) {
				sum+=(mx.a[i][k]*mx.b[k][j]);
			}
			mx.c[i][j]=sum;
		}
	}
	for(int i=0;i<mx.n;i++) {
		for(int j=0;j<mx.p;j++) {
			cout << mx.c[i][j] << " ";
		}
		cout << endl;
	}
}

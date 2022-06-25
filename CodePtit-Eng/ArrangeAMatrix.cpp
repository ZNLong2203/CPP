#include<bits/stdc++.h>
using namespace std;

int main() {
	int m,n,stt;
	cin >> m >> n >> stt;
	int a[200][200];
	int b[100000]={};
	int k=0;
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=n;j++) {
			cin >> a[i][j];
			if(j==stt) {
				b[k]=a[i][j];
				k++;	
			}
		}
	}
	sort(b,b+k);
	k=0;
	for(int i=1;i<=m;i++) {
		a[i][stt]=b[k];
		k++;	
	}
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
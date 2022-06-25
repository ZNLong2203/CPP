#include<bits/stdc++.h>
using namespace std;

void work(int a[200][200],int n,int m) {
	int idx = 0,cnt=1;
    int soHang = n;
    int soCot = m;
    int vtHang = 0;
	int vtCot = 0;
    int ans[100000];
    while(cnt <= m * n) {
        for(int i = vtCot; i < soCot; i++) {
            ans[idx] = a[vtHang][i];
            cnt++;
            idx++;
        }
        for(int i = vtHang + 1; i < soHang; i++) {
            ans[idx] = a[i][soCot - 1];
            cnt++;
            idx++;
        }
        for(int i = soCot - 2; i >= vtCot; i--) {
            ans[idx] = a[soHang - 1][i];
            cnt++;
            idx++;
        }
        for(int i = soHang - 2; i > vtHang; i--) {
            ans[idx] = a[i][vtCot];
            cnt++;
            idx++;
        }
        vtHang++;
        vtCot++;
        soHang--;
        soCot--;
    }
    for(int i = 0; i < n * m; i++)  {
    	cout << ans[i] << " ";	
	}	
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		int a[200][200];
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin >> a[i][j];
			}
		}
		work(a,n,m);
	}
}
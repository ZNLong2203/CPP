#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,max;
		cin >> n;
		int a[200][200];
		int rowmax=0;
		int colmax=0;
		for(int i=0;i<n;i++) { // Scan and find row max
			int row=0;
			for(int j=0;j<n;j++) {
				cin >> a[i][j];
				row+=a[i][j];
			}
			if(rowmax < row) {
				rowmax=row;
			}
		}
		for(int j=0;j<n;j++) { // Find col max
			int col=0;
			for(int i=0;i<n;i++) {
				col+=a[i][j];
			}
			if(colmax < col) {
				colmax=col;
			}
		}
		if(colmax>rowmax) { //Find the maximum
			max=colmax;
		}	else max=rowmax;
		
		int kq=0;
		for(int i=0;i<n;i++) { // Transform
			int row=0;
			for(int j=0;j<n;j++) {
				row+=a[i][j];
			}
			kq+=max-row;
		}
		cout << kq << endl;
	}
}
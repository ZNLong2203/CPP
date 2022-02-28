#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		int a[200000]={0};
		int b[200000]={0};
		int luu[200000]={0};
		int sx[200000]={0};
		for(int i=0;i<n;i++) { // Scan and store in frequency array
			cin >> a[i];
			luu[a[i]]++;
		}
		for(int i=0;i<m;i++) {	//Scan and print the first element of Arr in array b
			cin >> b[i];
			while(luu[b[i]]!=0) {
				cout << b[i] << " ";
				luu[b[i]]--;
			}
		}
		long long dem=0;
		for(int i=0;i<n;i++) {	//Take other element in Array a to new array
			while(luu[a[i]]!=0) {
				sx[dem]=a[i];
				dem++;
				luu[a[i]]--;
			}
		}
		sort(sx,sx+dem);
		for(int i=0;i<dem;i++) {
			cout << sx[i] << " ";
		}
		cout << endl;
	}
}
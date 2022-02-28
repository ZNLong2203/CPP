#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int count=1;
	while(t--) {
		int n,m,k;
		cin >> n >> m >> k;
		int a[1000];
		int b[1000];
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		for(int i=0;i<m;i++) {
			cin >> b[i];
		}
		cout << "Test " << count << ":" << endl;
		count++;
		for(int i=0;i<k;i++) {
			cout << a[i] << " ";
		}
		for(int i=0;i<m;i++) {
			cout << b[i] << " ";
		}
		for(int i=k;i<n;i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	int a[1000];
	int b[1000];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<m;i++) {
		cin >> b[i];
	}
	int k;
	cin >> k;
	for(int i=0;i<k;i++) {
		cout << a[i] << " ";
	}
	for(int i=0;i<m;i++) {
		cout << b[i] << " ";
	}
	for(int i=k;i<n;i++) {
		cout << a[i] << " ";
	}
}
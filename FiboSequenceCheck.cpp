#include<bits/stdc++.h>
using namespace std;

int checkfibo(int n) {
	int so1=0;
	int so2=1;
	int so=so1+so2;
	while(so<n) {
		so1=so2;
		so2=so;
		so=so1+so2;
	}	
	if(so==n || n==0 || n==1) {
		return 1;
	}	else return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[10000];
		for(int i=0;i<n;i++) {
			cin >> a[i];
			if(checkfibo(a[i])) {
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}

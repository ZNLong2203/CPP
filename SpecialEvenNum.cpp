#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,luu;
		cin >> n;
		int count=0;
		if(n%2==0) {
			while(n>0) {
				n/=10;
				luu=n%10;
				if(luu % 2 !=0) {
					cout << "NO" << endl;
					count++;
					break;
				}
			}
			if(count==0) {
				cout << "YES" << endl;
			}
		}	else cout << "NO" << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i=2;i<=sqrt(n);i++) {
			int cnt = 0;
			if(n%i==0) {
				while(n%i==0) {
				n/=i;
				cnt++;
				}
				cout << i << " " << cnt << " ";	
			}
		}
		if(n!=1) cout << n << " " << "1" << " ";	
		cout << endl;
	}
}
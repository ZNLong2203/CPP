#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,k,xet;
		cin >> n >> k;
		if(n<k) {
			xet=((n+1)*n)/2;
			if(xet==k) {
				cout << "1" << endl;
			}	else cout << "0" << endl;
		}	else {
			xet=(k*(k-1))/2;
			for(int i=k;i<=n;i++) {
				xet+=i%k;
			}
			if(xet==n) {
				cout << "1" << endl;
			}	else cout << "0" << endl;
		}
	}
}

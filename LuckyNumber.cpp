#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string n;
		cin >> n;
		long long kq=10000,xet=0;
		for(int i=0;i<n.size();i++) {
			xet+=n[i]-'0';
		}
		while(kq>10) {
			kq=0;
			while(xet>0) {
				kq+=xet%10;
				xet/=10;	
			}
			xet=kq;
		}
		if(kq==9) {
			cout << "1" << endl;	
		}	else {
			cout << "0" << endl;
		}
	}
}
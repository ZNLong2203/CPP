#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,nam,tuan,ngay;
	cin >> n;
	if(n-365>=0) {
		nam=n/365;
		n-=nam*365;
		cout << nam << " ";
	}	else cout << "0" << " ";
	if(n-7>=0) {
		tuan=n/7;
		n-=tuan*7;
		cout << tuan << " ";
	}	else cout << "0" << " ";
	if(n-1>=0) {
		cout << n;
	}	else cout << "0" << " ";
}

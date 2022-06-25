#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	ll tu = 1, mau = 1;
	for(int i=2;i<=n;i++) {
		mau*=i;
	}
	for(int i=n+2;i<=2*n;i++) {
		tu*=i;
	}
	cout << tu/mau << endl;
}
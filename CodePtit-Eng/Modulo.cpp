#include<bits/stdc++.h>
using namespace std;

int main() {
	long long a[10000]={0};
	for(int i=0;i<4;i++) {
		cin >> a[i];
	}
	sort(a,a+4);
	long long xet1=__gcd(a[1]-a[0],a[2]-a[1]);
	long long xet2=__gcd(xet1,a[3]-a[2]);
	cout << xet2;
}
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

long long cata(long long n) {
	long long mod = pow(10,9)+7;
	if(n<=1) {
		return 1;
	}
	long long r=0;
	for(int i=0;i<n;i++) {
		r+=((cata(i)%mod)*(cata(n-i-1)%mod))%mod;
	}
	return r;
}

int main() {
	long long n;
	cin >> n;
	n/=2;
	cout << cata(n);
}
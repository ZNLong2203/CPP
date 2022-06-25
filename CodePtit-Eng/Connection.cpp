#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	unsigned long long tu=1;
	unsigned long long mau=1;
	long long mod=pow(10,9)+7;
	for(int i=(n/2)+1;i<=n;i++) {
		tu=(tu*i)%mod;
	}
	for(int i=2;i<=n/2;i++) {
		mau=(mau*i)%mod;
	}
	unsigned long long so=((tu/mau)/((n/2)+1))%mod;
	cout << so;
}
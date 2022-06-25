#include<bits/stdc++.h>
#define ll long long
using namespace std;

int prime[1000005]={0};
void sang() {
	for(int i=0;i<1000000;i++) {
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2;i<=sqrt(1000000);i++) {
		if(prime[i]) {
			for(int j=i*i;j<=1000000;j+=i) {
				prime[j]=0;
			}
		}
	}
}
void solve() {
	ll l,r;
	cin >> l >> r;
	ll cnt = 0;
	for(int i=round(sqrt(l)+0.5);i<=sqrt(r);i++) {
		if(prime[i]) cnt++;
	}
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	sang();
	while(t--) {
		solve();
	}
}
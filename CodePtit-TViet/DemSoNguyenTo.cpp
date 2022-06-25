#include<bits/stdc++.h>
using namespace std;

int prime[100005]={0};
void sang() {
	for(int i=0;i<=100000;i++) {
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=0;i<=sqrt(100000);i++) {
		if(prime[i]) {
			for(int j=i*i;j<=100000;j+=i) {
				prime[j]=0;
			}
		}
	}
}

void solve() {
	int l,r;
	cin >> l >> r;
	int cnt = 0;
	for(int i=l;i<=r;i++) {
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
#include<bits/stdc++.h>
using namespace std;

int prime[1000005]={0};
void sang() {
	for(int i=0;i<=1000005;i++) {
		prime[i]=1;
	}	
	prime[0]=prime[1]=0;
	for(int i=2;i<=sqrt(1000005);i++) {
		if(prime[i]) {
			for(int j=i*i;j<=1000005;j+=i) {
				prime[j]=0;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		int mn=min(n,m);
		int mx=max(n,m);
		sang();
		for(int i=mn;i<=mx;i++) {
			if(prime[i]) cout << i << " ";
		}	
		cout << endl;
	}
}
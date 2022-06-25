#include<bits/stdc++.h>
using namespace std;

int prime[100005]={0};
void sang() {
	for(int i=1;i<=100000;i++) {
		prime[i]=i;
	}	
	for(int i=2;i<=100000;i++) {
		if(prime[i]==i) {
			for(int j=i*2;j<=100000;j+=i) {
				if(prime[j]==j) prime[j]=i;
			}
		}
	}
}

void solve() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) {
		cout << prime[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	sang();
	while(t--) {
		solve();
	}
}
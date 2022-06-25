#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fibo[100]={0};
void solve() {
	ll n;
	cin >> n;
	for(int i=0;i<=95;i++) {
		if(fibo[i]==n) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

void sang() {
	fibo[0]=0;
	fibo[1]=fibo[2]=1;
	for(int i=3;i<=95;i++) {
		fibo[i]=fibo[i-1]+fibo[i-2];
	}	
}

int main() {
	int t;
	cin >> t;
	sang();
	while(t--) {
		solve();
	}
}
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod = 1000000007;
ll a[100001]={0};
void solve() {
	a[0]=0, a[1]=a[2]=1;
	for(ll i=3;i<=1001;i++) {
		a[i]=a[i-1]%mod+a[i-2]%mod;
		a[i]%=mod;
	}
}
int main() {
	int t;
	cin >> t;
	solve();	
	while(t--) {
		ll n;
		cin >> n;
		cout << a[n] << endl;
	}
}
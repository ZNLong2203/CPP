#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,m;
	cin >> n >> m;
	ll sum = 0, check = 0;
	sum=((n+1)*n)/2;
	check = sum;
	sum+=m;
	if(sum%2!=0) {
		cout << "NO\n";
		return;
	}
	sum/=2;
	check-=sum;
	ll xet = __gcd(sum,check);
	if(xet==1) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
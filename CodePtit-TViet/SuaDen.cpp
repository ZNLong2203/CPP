#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n, k, b;
	cin >> n >> k >> b;
	ll a[100005]={0};
	for(int i=0;i<b;i++) {
		ll x; cin >> x;
		a[x]=1;
	}
	ll kq = 0, xet = 0;
	for(int i=1;i<=k;i++) {
		if(a[i]==1) xet++;
	}
	kq = xet;
	for(int i=k+1;i<=n;i++) {
		if(a[i-k]==1) xet--;
		if(a[i]==1) xet++;
		if(kq>xet) kq=xet;
	}
	cout << kq << endl;
}
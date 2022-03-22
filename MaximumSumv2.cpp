#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n,ll m,ll a[],ll b[]) {
	ll kq = 0;
	ll sum1=0,sum2=0;
	ll i=0,j=0;
	while(i<n && j<m) {
		if(a[i]>b[j]) {
			sum2+=b[j];
			j++;
		}	else if(a[i]<b[j]) {
			sum1+=a[i];
			i++;
		}	else {
			kq+=a[i];
			kq+=max(sum1,sum2);
			sum1=0,sum2=0;
			i++,j++;
		}
	}
	while(i<n) sum1+=a[i++];
	while(j<m) sum2+=b[j++];
	kq+=max(sum1,sum2);
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n,m;
		cin >> n >> m;
		ll a[100000]={0};
		ll b[100000]={0};
		for(ll i=0;i<n;i++) cin >> a[i];
		for(ll i=0;i<m;i++) cin >> b[i];
		solve(n,m,a,b);
	}
}
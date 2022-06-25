#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		multiset<ll> ms;
		for(int i=0;i<n;i++) {
			ll x; cin >> x;
			ms.insert(x);
		}
		for(int i=0;i<n;i++) {
			if(ms.count(i)) cout << i << " ";
			else cout << "-1 ";
		}
		cout << endl;
	}
}
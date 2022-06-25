#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n,cnt = 0;
	cin >> n;
	for(int i=2;i<=sqrt(n);i++) {
		cnt=0;
		if(n%i==0) {
			while(n%i==0) {
				cnt++;
				n/=i;
			}
			cout << i << " " << cnt << endl;
		}
	}
	if(n!=1) cout << n << " " << "1" << endl;
}
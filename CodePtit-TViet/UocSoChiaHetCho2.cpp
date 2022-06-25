#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		int cnt = 0;
		for(int i=1;i<=sqrt(n);i++) {
			if(n%i==0) {
				if(i%2==0) cnt++;
				if(n/i!=i) {
					if((n/i%2)==0) cnt++;
				}	
			}
		}
		cout << cnt << endl;
	}
}
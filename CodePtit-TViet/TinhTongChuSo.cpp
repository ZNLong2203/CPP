#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll sum = 0;
		while(n>9) {
			sum = 0;
			while(n>0) {
				sum+=n%10;
				n/=10;
			}
			if(sum>9) n=sum;
			else break;
		}
		cout << sum << endl;
	}
}
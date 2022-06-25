#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,k;
		cin >> n >> k;
		long long sum = 1;
		for(int i=2;i<=n;i++) {
			sum+=(i%k);
		}
		cout << sum << endl;
	}
}
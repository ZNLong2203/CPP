#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,x;
		cin >> n >> x;
		long long sum=0;
		long long tinh=1;
		int arr[10000];
		for(int i=0;i<n;i++) {
			cin >> arr[i];
		}
		long long mod=pow(10,9)+7;
		for(int i=n-1;i>=0;i--) {
			sum+=arr[i]*tinh;
			sum%=mod;
			tinh*=x;
			tinh%=mod;
		}
		cout << sum << endl;
	}
}
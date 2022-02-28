#include<bits/stdc++.h>
using namespace std;

int check(long long sum,long long m) {
	long long so1,so2,xet;
	if(sum>0 && sum%2==0) {
		so1=sum/2;
		so2=so1+m;
		xet=__gcd(so1,so2);
		if(xet==1) {
			return 1;
		}	else return 0;
	}	else {
		return 0;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,m;
		cin >> n >> m;
		long long sum = 0;
		for(int i=1;i<=n;i++) {
			sum+=i;
		}
		sum-=m;
		if(check(sum,m)==1) {
			cout << "Yes" << endl;
		}	else cout << "No" << endl;
	}
}
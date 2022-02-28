#include<iostream>
#include<math.h>
using namespace std;

int prime(long long n) {
	int count = 0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			count++;
		}
	}
	if(count!=0 || n<2) {
		return 0;
	}	else return 1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,kq;
		cin >> n;
		kq=n;
		int sum=0;
		while(n>0) {
			sum+=n%10;
			n/=10;
		}
		if(prime(sum)) {
			cout << kq << endl;
		}	else cout << "-1" << endl;
	}
}

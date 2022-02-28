#include<iostream>
using namespace std;

int reduce(long long n) {
	long long so = 0;
	while(n>0) {
		so+=n%10;
		n/=10;
	}
	return so;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		while(n>=10) {
			n = reduce(n);
		}
		cout << n << endl;
	}
}

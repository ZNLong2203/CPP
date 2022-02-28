#include<iostream>
using namespace std;

long long reverse(unsigned long long n) {
	unsigned long long t=0;
	while(n>0) {
		t=t*10+n%10;
		n/=10;
	}
	return t;
}

int main() {
	unsigned long long n;
	cin >> n;
	cout << reverse(n);
}

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int prime(long long n) {
	int count=0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			count++;
			break;
		}
	}
	if(count==0) {
		return 1;
	}	else return 0;
}
int check(long long n) {
	int count=3;
	long long xet=n*n;
	for(int i=2;i<n;i++) {
		if(xet%i==0) {
			count+=2;
		}
		if(count>9) {
			break;
		}
	}
	if(count==9) {
		return 1;
	}	else return 0;
}

int main() {
	long long n;
	cin >> n;
	if(n<36) {
		cout << "0";
		return 0;
	}	else {
		int dem=0;
		for(int i=6;i<=sqrt(n);i++) {
			if(prime(i)==0) {
				if(check(i)==1) {
					dem++;
				}
			}
		}
		cout << dem;
		return 0;
	}
}
    
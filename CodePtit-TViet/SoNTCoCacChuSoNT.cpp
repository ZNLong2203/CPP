#include<bits/stdc++.h>
#define ll long long
using namespace std;

int prime[1000005]={0};
void sang() {
	for(int i=0;i<=1000000;i++) {
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2;i<=sqrt(1000000);i++) {
		if(prime[i]) {
			for(int j=i*i;j<=1000000;j+=i) {
				prime[j]=0;
			}
		}
	}
}
int check(int n) {
	while(n>0) {
		int xet=n%10;
		if(xet!=2 && xet!=3 && xet!=5 && xet!=7) return 0;
		n/=10;
	}
	return 1;
}
int main() {
	int a,b;
	cin >> a >> b;
	int cnt = 0;
	sang();
	for(int i=a;i<=b;i++) {
		if(prime[i]) {
			if(check(i)) cnt++;
		}
	}
	cout << cnt;
}
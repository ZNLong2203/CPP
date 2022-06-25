#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll chanle(ll n) {
	ll check = 0, xet;
	while(n>0) {
		xet = n%10;
		n/=10;
		if(xet%2==0) check++;
		else check--;
	}	
	if(check==0) return 1;
	else return 0;
}

int main() {
	int n, dem = 0;
	cin >> n;
	for(int i=pow(10,n-1);i<pow(10,n);i++) {
		if(chanle(i)) {
			cout << i << " ";
			dem++;
		}
		if(dem==10) {
			dem=0;
			cout << endl;
		}
	}
}
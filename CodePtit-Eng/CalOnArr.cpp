#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void grdivisor(int &ucln,int a) {
	while(ucln*a!=0) {
		if(ucln > a) {
			ucln%=a;
		}	else a%=ucln;
	}
	ucln=ucln+a;
}

void check(int a[],int n,long long &gx) {
	int ucln = a[0];
	for(int i=1;i<n;i++) {
		grdivisor(ucln,a[i]);
	}	
	gx=ucln;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[10000];
		const unsigned int mod = 1000000007;
		long long hx = 1,gx = 0;
		for(int i=0;i<n;i++) {
			cin >> a[i];
			hx=(hx*a[i])%mod;
		}
		check(a,n,gx);
		long long kq=1;
		while(gx--) {
			kq=(kq*hx)%mod;
		}
		cout << kq << endl;
	}
}
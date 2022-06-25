#include<bits/stdc++.h>
#define ll long long
using namespace std;

int prime(ll n) {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) return 0;
    }
    if(n>=2) return 1;
    else return 0;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
	    cin >> n;
	    ll sum = 0,xet;
	    ll luu = n;
	    for(int i=2;i<=sqrt(n);i++) {
	        if(n%i==0) {
	            while(n%i==0) {
	                if(i>9) {
	                    xet=i;
	                    while(xet>0) {
	                        sum+=xet%10;
	                        xet/=10;
	                    }
	                }    else sum+=i;
	                n/=i;
	            }
	        }
	    }
	    if(n!=1) {
	        if(n>9) {
	            xet=n;
	            while(xet>0) {
	                sum+=xet%10;
	                xet/=10;
	            }
	        }    else sum+=n;
	    }
	    ll so = 0;
	    n=luu;
	    while(n>0) {
	        so+=n%10;
	        n/=10;
	    }
	    if(prime(luu)==0 && sum==so) cout << "YES\n";
	    else cout << "NO\n";	
	}
}
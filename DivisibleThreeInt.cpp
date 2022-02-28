#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long x,y,z,n;
		cin >> x >> y >> z >> n;
		long long xet,bcnn1,bcnn2,so;
		bcnn1=x*y;
		while(x!=y) {
			if(x>y) {
				x-=y;
			}	else {
				y-=x;
			}
		}
		bcnn1/=x;
		bcnn2=bcnn1*z;
		while(bcnn1!=z) {
			if(bcnn1>z) {
				bcnn1-=z;
			}	else {
				z-=bcnn1;
			}
		}
		bcnn2/=z;
		for(int i=1;i<100000;i++) {
			xet=bcnn2;
			xet*=i;
			int luu =xet;
			int count=0;
			while(xet>0) {
				xet/=10;
				count++;
			}
			if(count>n) {
				cout << "-1" << endl;
				break;
			}
			if(count==n) {
				cout << luu << endl;
				break;
			}
		}
	}
}

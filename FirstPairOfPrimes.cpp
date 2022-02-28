#include<iostream>
#include<math.h>
using namespace std;

int check(int n) {
	int count=0;
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
		int n,sohai;
		int dem = 0;
		cin >> n;
		for(int i=2;i<=sqrt(n)+100;i++) {
			if(check(i)==1) {
				sohai=n-i;
				if(check(sohai)==1) {
					cout << i << " " << sohai << endl;
					dem++;
					break;
				}
			}	else if(i>=n) {
				break;
			}
		}
		if(dem==0) {
			cout << "-1" << endl;
		}
	}
}

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int a,b,xet;
	cin >> a >> b;
	int sum=0;
	for(int i=a;i<=b;i++) {
		xet=sqrt(i);
		if(xet*xet==i) {
			sum+=i;
		}
	}
	cout << sum;
}

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long sum = 0;
	for(int i=1;i<=n;i++) {
		long long tich = 1;
		for(int j=1;j<=i;j++) {
			tich*=j;
		}
		sum+=tich;
	}
	cout << sum;
}

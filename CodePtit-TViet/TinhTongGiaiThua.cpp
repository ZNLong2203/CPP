#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long tong = 1, tich = 1;
	for(int i=2;i<=n;i++) {
		tich*=i;
		tong+=tich;
	}
	cout << tong;
}
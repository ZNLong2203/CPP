#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	double n;
	cin >> n;
	double sum = 0;
	for(double i=1;i<=n;i++) {
		sum+=1/i;
	}
	cout << setprecision(4) << fixed << sum;
}
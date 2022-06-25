#include<bits/stdc++.h>
#include<math.h>
using namespace std;

double recursion(double n) {
	if(n==1) {
		return 1;
	}	else return sqrt(n+recursion(n-1));
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		double n;
		cin >> n;
		double a=recursion(n);
		cout << setprecision(5) << fixed <<a<< endl;
	}
}

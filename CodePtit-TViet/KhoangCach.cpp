#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		double x,y,z,t;
		cin >> x >> y >> z >> t;
		double kq = sqrt((x-z)*(x-z)+(y-t)*(y-t));
		cout << setprecision(4) << fixed << kq << endl;
	}
}
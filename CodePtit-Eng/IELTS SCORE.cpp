#include<bits/stdc++.h>
using namespace std;

double checkband(int n) {
	if(n>=39) return 9.0;
	else if(n>=37) return 8.5;
	else if(n>=35) return 8.0;
	else if(n>=33) return 7.5;
	else if(n>=30) return 7.0;		
	else if(n>=27) return 6.5;
	else if(n>=23) return 6.0;
	else if(n>=20) return 5.5;
	else if(n>=16) return 5.0;
	else if(n>=13) return 4.5;
	else if(n>=10) return 4.0;
	else if(n>=7) return 3.5;
	else if(n>=5) return 3.0;
	else if(n>=3) return 2.5;
}

double solve() {
	int x,y;
	double z,t;
	cin >> x >> y >> z >> t;
	double sum = (checkband(x)+checkband(y)+z+t)/4;
	double ans = sum-(int)sum;
	if(ans < 0.25) return sum-ans;
	else if(ans < 0.75) return sum-ans + 0.5;
	else return sum - ans + 1.0; 
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cout << setprecision(1) << fixed << solve() << endl;
	}
}
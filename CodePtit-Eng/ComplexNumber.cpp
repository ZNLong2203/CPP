#include<bits/stdc++.h>
using namespace std;

struct Complex {
	int t1,a1,t2,a2,t3,a3;
	void input() {
		cin >> t1 >> a1 >> t2 >> a2;
	}
};


int main() {
	Complex cp[500];
	int t;
	cin >> t;
	int temp;
	for(int i=0;i<t;i++) {
		cp[i].input();
		cp[i].t3 = cp[i].t1 + cp[i].t2;
		cp[i].a3 = cp[i].a1 + cp[i].a2;
		
		temp = cp[i].t3*cp[i].t3 - cp[i].a3 * cp[i].a3;
		cp[i].a3 = cp[i].t3*cp[i].a3 + cp[i].t3 * cp[i].a3;
		cp[i].t3 = temp;
		if(cp[i].a3 < 0) cout << cp[i].t3 << " - " << abs(cp[i].a3) << "i\n";
		else cout << cp[i].t3 << " + " << abs(cp[i].a3) << "i\n";
	}
	
}
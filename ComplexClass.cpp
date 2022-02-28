#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Complex {
	public:
		int x1,y1;
		int x2,y2;
		int x3,y3;
};

void input(Complex &cp) {
	cin >> cp.x1 >> cp.y1;
	cin >> cp.x2 >> cp.y2;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		Complex cp;
		input(cp);
		
		cp.x3=cp.x1+cp.x2;
		cp.y3=cp.y1+cp.y2;
		int ThucC = cp.x3*cp.x1 - cp.y3*cp.y1;
		int AoC = cp.x3*cp.y1 + cp.y3*cp.x1;
		int ThucD = cp.x3*cp.x3 - cp.y3*cp.y3;
		int AoD = cp.x3*cp.y3 + cp.y3*cp.x3;
		
		string DauC;
		string DauD;
		if(AoC>=0) {
			DauC=" + ";
		}	else DauC=" - ";
		if(AoD>=0) {
			DauD=" + ";
		}	else DauD=" - ";
		AoC=abs(AoC);
		AoD=abs(AoD);
		
		cout << ThucC << DauC<< AoC << "i" << ", ";
		cout << ThucD << DauD << AoD << "i" << endl;
	}
}
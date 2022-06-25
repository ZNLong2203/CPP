#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Fraction {
	public:
	long long numerator;
	long long denominator;	
};

int main() {
	long long num,deno,min;
	cin >> num >> deno;
	
	Fraction Frac;
	Frac.numerator = num;
	Frac.denominator = deno;
	
	while(num*deno!=0) {
		if(num > deno) {
			num%=deno;
		}	else deno%=num;
	}
	long long kq = num+deno;
	cout << Frac.numerator/kq << "/" << Frac.denominator/kq;
}
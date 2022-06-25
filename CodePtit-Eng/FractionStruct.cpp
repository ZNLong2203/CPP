#include<bits/stdc++.h>
using namespace std;

struct Fraction {
	long long num;
	long long deno;
}; 

void input(Fraction &p) {
	cin >> p.num;
	cin >> p.deno;
}

void simplify(Fraction &p) {
	long long ucln=1;
	long long tu = p.num;
	long long mau = p.deno;
	while(tu*mau!=0) {
		if(tu>mau) {
			tu%=mau;
		}	else mau%=tu;
	}	
	ucln=tu+mau;
	p.num/=ucln;
	p.deno/=ucln;
}

int print(Fraction &p) {
	cout << p.num << "/" << p.deno;	
	return 0;
}

int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}
#include<bits/stdc++.h>
#define t T;
using namespace std;
struct Fraction {
	long long tu,mau;
	long long tu2,mau2;
};

void read_input(Fraction &fc) {
	cin >> fc.tu >> fc.mau;
}

void process(Fraction &A,Fraction &B) {
	long long tuC,mauC;
	if(A.mau%B.mau==0) {
		mauC=A.mau;
		tuC=B.tu*(A.mau/B.mau)+A.tu;
	}	else if(B.mau%A.mau==0) {
		mauC=B.mau;
		tuC=A.tu*(B.mau/A.mau)+B.tu;
	}	else {
		mauC=(A.mau*B.mau);
		tuC=(A.tu*B.mau + B.tu*A.mau);
	}
	long long xet = __gcd(mauC,tuC);
	mauC/=xet;
	tuC/=xet;
	long long tuD = A.tu*B.tu*tuC*tuC;
	long long mauD = A.mau*B.mau*mauC*mauC;
	xet = __gcd(tuD,mauD);
	tuD/=xet;
	mauD/=xet;
	cout << tuC*tuC << "/" << mauC*mauC << " ";
	cout << tuD << "/" << mauD << endl;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}
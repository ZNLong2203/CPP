#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Fraction {
	public:
	long long num;
	long long deno;	
};

int ucln(long long num1,long long deno1,long long num2,long long deno2,long long &kq1,long long &kq2) {
	while(num1*deno1!=0) {
		if(num1 > deno1) {
			num1%=deno1;
		}	else deno1%=num1;
	}
	while(num2*deno2!=0) {
		if(num2 > deno2) {
			num2%=deno2;
		}	else deno2%=num2;
	}
	kq1 = deno1+num1;
	kq2 = deno2+num2;
	return kq1,kq2;
}

int main() {
	long long num1,deno1;
	cin >> num1 >> deno1;
	
	Fraction p;
	p.num = num1;
	p.deno = deno1;
	
	long long num2,deno2;
	cin >> num2 >> deno2;

	Fraction q;
	q.num = num2;
	q.deno = deno2;
	
	long long kq1=0,kq2=0;
	ucln(num1,deno1,num2,deno2,kq1,kq2);
	p.num/=kq1;
	p.deno/=kq1;
	q.num/=kq2;
	q.deno/=kq2;
	
	if(p.deno % q.deno == 0) {
		q.num *=(p.deno/q.deno);
		p.num +=q.num;
	}	else if(q.deno % p.deno == 0) {
		p.num *=(q.deno/p.deno);
		p.num +=q.num;
		p.deno = q.deno;
	}	else {
		q.num *=p.deno;
		p.deno *=q.deno;
		p.num =p.num*(q.deno)+q.num;
	}
	long long tu=p.num;
	long long mau=p.deno;
	while(p.num*p.deno!=0) {
		if(p.num > p.deno) {
			p.num%=p.deno;
		}	else p.deno%=p.num;
	}
	kq1=p.deno+p.num;
	cout << tu/kq1 << "/" << mau/kq1;
}
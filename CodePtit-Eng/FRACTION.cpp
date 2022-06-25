#include<bits/stdc++.h>
using namespace std;

class Frac {
	public:
		int num,deno;
		void input() {
			cin >> num >> deno;
		}
};

int main() {
	int t;
	cin >> t;
	while(t--) {
		Frac a,b,c,d;
		a.input();
		b.input();
		int xet,tmp;
		tmp = (a.deno * b.deno)/__gcd(a.deno,b.deno);
		a.num*=(tmp/a.deno);
		b.num*=(tmp/b.deno);
		a.deno=tmp;
		b.deno=tmp;
		c.num = (a.num + b.num) * (a.num + b.num);
		c.deno = (a.deno * b.deno);
		xet = __gcd(c.num,c.deno);
		c.num/=xet;
		c.deno/=xet;
		
		d.num = (a.num * b.num * c.num);
		d.deno = (a.deno * b.deno * c.deno);
		xet = __gcd(d.num,d.deno);
		d.num/=xet;
		d.deno/=xet;
		cout << c.num << "/" << c.deno << " ";
		cout << d.num << "/" << d.deno << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;

int main() {
	float a,b;
	char x;
	cin >> a >> x >> b;
	switch(x) {
		case '+':
			cout << setprecision(2) << fixed << a+b;
			break;
		case '-':
			cout << setprecision(2) << fixed << a-b;
			break;
		case '*':
			cout << setprecision(2) << fixed << a*b;
			break;
		case '/':
			cout << setprecision(2) << fixed << a/b;
			break;
	}
}

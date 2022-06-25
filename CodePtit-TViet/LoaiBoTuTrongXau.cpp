#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1,s2,xet;
	getline(cin,s1);
	cin >> s2;
	stringstream ss(s1);
	while(ss >> xet) {
		if(xet!=s2) cout << xet << " "; 
	}
}
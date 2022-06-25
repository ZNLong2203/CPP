#include<bits/stdc++.h>
#include<fstream>
#define ll long long
using namespace std;

int main() {
	ifstream in_file {"DATA.in"};
	string s;
	ll sum = 0;
	while(in_file >> s) {
		if(isdigit(s[0]) && s.size()<=10) {
			sum+=stoll(s);
		}
	}
	cout << sum << endl;
}
#include<bits/stdc++.h>
#include<fstream>
#include<ctype.h>
using namespace std;

int main() {
	string s;
	int a[10000];
	ifstream in_file {"DATA.in"};
	if(in_file) {
		while(in_file >> s) {
			int i=0;
			int xet=0;
			while(isdigit(s[i]) && i<s.size()) {
				xet=xet*10+(s[i]-'0');
				i++;
			}
			a[xet]++;
		}
	}
	for(int i=0;i<=1000;i++) {
		if(a[i]!=0) {
			cout << i << " " << a[i] << "\n";
		}
	}
}
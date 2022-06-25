#include<bits/stdc++.h>
#include<fstream>
#include<ctype.h>
using namespace std;

int main() {
	string s;
	ifstream in_file {"DATA.in"};
	long long kq=0;
	if(in_file) {
		while(in_file >> s) {
			if(isdigit(s[0])) {
				int i=0;
				int xet=0;
				while(i<s.size() && s.size()<=8 && isdigit(s[i])) {
					xet=xet*10+s[i]-'0';
					i++;
				}
				kq+=xet;
			}
		}
	}
	cout << kq;
	in_file.close();
	return 0; 
}
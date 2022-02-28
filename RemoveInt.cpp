#include<bits/stdc++.h>
#include<fstream>
#include<ctype.h>
using namespace std;

int main() {
	string s;
	ifstream in_file {"DATA.in"};
	multiset<string> ss;
	if(in_file) {
		while(in_file >> s) {
			if(s.size()>9 || isalpha(s[0])) {
				ss.insert(s);
			}
		}
	}
	multiset<string>::iterator it;
	for(it=ss.begin();it!=ss.end();it++) {
		cout << *it << " ";
	}
	in_file.close();
	return 0;
}
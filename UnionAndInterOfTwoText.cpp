#include<bits/stdc++.h>
#include<fstream>
#include<ctype.h>
using namespace std;

int main() {
	string s;
	set<string> ss1,ss2;
	set<string>::iterator it1,it2;
	ifstream in1_file {"DATA1.in"};
	ifstream in2_file {"DATA2.in"};
	if(in1_file && in2_file) {
		while(in1_file >> s) {
			for(int i=0;i<s.size();i++) {
				if(isupper(s[i])) {
					s[i]+=32;
				}
			}
			ss1.insert(s);
		}
		while(in2_file >> s) {
			for(int i=0;i<s.size();i++) {
				if(isupper(s[i])) {
					s[i]+=32;
				}
			}
			if(ss1.count(s)) {
				ss2.insert(s);
			}
			ss1.insert(s);
		}
	}
	for(auto x:ss1) {
		cout << x << " ";
	}
	cout << endl;
	for(auto x:ss2) {
		cout << x << " ";
	}
	in1_file.close();
	in2_file.close();
	return 0;
}
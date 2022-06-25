#include<bits/stdc++.h>
#include<fstream>
#include<ctype.h>
using namespace std;

int main() {
	string s;
	ifstream in1_file {"DATA1.in"};
	ifstream in2_file {"DATA2.in"};
	set<string>ss1,ss2,ss3;
	set<string>::iterator it1,it2,it3;
	if(in1_file) {
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
			ss2.insert(s);
		}
	}
	for(it2=ss2.begin();it2!=ss2.end();it2++) { // Create a set to store set in Data 2)
		ss3.insert(*it2);
	}
	for(it1=ss1.begin();it1!=ss1.end();it1++) { // Set2 with it remove word in Data1
		ss2.erase(*it1);
	}
	for(it3=ss3.begin();it3!=ss3.end();it3++) {	// Set1 with it remove word in Data2(store in set3)
		ss1.erase(*it3);
	}
	for(it1=ss1.begin();it1!=ss1.end();it1++) {
		cout << *it1 << " ";
	}
	cout << endl;
	for(it2=ss2.begin();it2!=ss2.end();it2++) {
		cout << *it2 << " ";
	}
	in1_file.close();
	in2_file.close();
	return 0;
}
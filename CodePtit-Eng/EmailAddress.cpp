#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	stringstream st(s);
	string ss;
	string kq="";
	while(st >> ss) {
		kq="";
	}
	for(int i=0;i<ss.size();i++) {
		ss[i]=tolower(ss[i]);
		kq.push_back(ss[i]);
	}
	stringstream se(s);
	while(se >> ss) {
		ss[0]=tolower(ss[0]);
		kq.push_back(ss[0]);
	}
	kq.pop_back();
	cout << kq << "@ptit.edu.vn";
}
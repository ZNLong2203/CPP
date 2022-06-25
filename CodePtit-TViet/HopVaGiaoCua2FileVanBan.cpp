#include<bits/stdc++.h>
#include<fstream>
#define ll long long
using namespace std;

int main() {
	ifstream in1_file {"DATA1.in"};
	ifstream in2_file {"DATA2.in"};
	string xet;
	set<string> se1,se2,se3;
	while(in1_file >> xet) {
		for(int i=0;i<xet.size();i++) {
			xet[i] = tolower(xet[i]);
		}
		se1.insert(xet);
		se2.insert(xet);
	}
	while(in2_file >> xet) {
		for(int i=0;i<xet.size();i++) {
			xet[i] = tolower(xet[i]);
		}
		if(se2.count(xet)) se3.insert(xet);
		se1.insert(xet);
	}
	for(auto x:se1) cout << x << " ";
	cout << endl;
	for(auto x:se3) cout << x << " ";
	cout << endl;
}
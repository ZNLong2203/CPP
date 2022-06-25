#include<bits/stdc++.h>
#include<fstream>
#define ll long long
using namespace std;

int main() {
	ifstream in_file {"VANBAN.in"};
	set<string> se;
	string xet;
	while(in_file >> xet) {
		for(int i=0;i<xet.size();i++) {
			xet[i] = tolower(xet[i]);
		}
		se.insert(xet);
	}
	for(auto x:se) {
		cout << x << endl;
	}
}
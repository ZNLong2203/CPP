#include<bits/stdc++.h>
#include<fstream>
#include<ctype.h>
using namespace std;

int main() {
	string s;
	set<int> luu,in;
	int n,m;
	ifstream in_file {"DATA.in"};
	if(in_file) {
		in_file >> n >> m;
		for(int i=0;i<n;i++) {
			int x; in_file >> x;
			luu.insert(x);
		}
		for(int i=0;i<m;i++) {
			int x; in_file >> x;
			if(luu.count(x)) {
				in.insert(x);
			}
		}
	}
	for(auto x:in) {
		cout << x << " ";
	}
}
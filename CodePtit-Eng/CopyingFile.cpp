#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main() {
	string s;
	ifstream ini_file {"PTIT.in"};
	ofstream out_file {"PTIT.out"};
	
	if(ini_file && out_file) {
		while(getline(ini_file,s)) {
			out_file << s << "\n";
		}
	}
	
	ini_file.close();
	out_file.close();
	return 0;
}
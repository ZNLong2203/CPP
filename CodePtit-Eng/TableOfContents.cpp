#include<bits/stdc++.h>
#define ll long long
#include<fstream>
using namespace std;

ll checkPage(string s) {
	int cnt = 0;
	string tmp = s.substr(0,4);
	if(tmp!="Page") return -1;
	for(int i=5;i<s.size();i++) {
		cnt = cnt*10 + (s[i]-'0');
	}
	return cnt;
}

ll checkLevel(string s) {
	string tmp = s.substr(0,5);
	if(tmp=="Level") return s[5]-'0';
	return -1;	
}

int main() {
	ifstream in_file("DOCUMENT.txt");
	ofstream out_file("TABLEOFCONTENTS.txt");
	string s;
	vector<string> v;
	ll luup, luul;
	while(getline(in_file,s)) {
		if(s.size()==0) continue;
		if(checkPage(s)!=-1) {
			luup=checkPage(s);
		}
		if(checkLevel(s)!=-1) {
			luul=checkLevel(s);
			string tmp = "";
			string sp = s.substr(8,s.size());
			for(int i=0;i<luul;i++) tmp+=">";
			tmp+=sp + "--- " + to_string(luup);
			v.push_back(tmp);
		}
	}
	for(auto x:v) out_file << x << endl;
}
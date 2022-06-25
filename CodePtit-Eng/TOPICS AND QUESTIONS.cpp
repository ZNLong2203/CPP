#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	string s;
	map<string,int> mp;
	vector<string> v;
	scanf("\n");
	int check = 1;
	getline(cin,s);
	string xet=s;
	v.push_back(xet);
	t-=1;
	while (t--){
		getline(cin,s);
		if(check==0) {
			xet=s;
			v.push_back(xet);
			check=1;
		}	else if(check==1 && s!="") {
			mp[xet]++;
		}
		if(s=="") {
			xet="";
			check=0;
		}
	}	
	for(auto x:v) {
		if(mp[x]) {
			cout << x << ": " << mp[x] << endl;
		}
	}
}
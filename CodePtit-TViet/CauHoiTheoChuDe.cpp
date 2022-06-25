#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	bool check = 1;
	unordered_map<string,int> mp;
	vector<string> v;
	string s,luu;
	while(t--) {
		fflush(stdin);
		getline(cin,s);
		if(check==1) {
			mp[s] = 0;
			check = 0;
			luu = s;
			v.push_back(s);
		}	else {
			if(s=="") {
				check = 1;
			}	else {
				mp[luu]++;
			}
		}
	}
	for(auto x:v) {
		cout << x << ": " << mp[x] << endl;
	}
}
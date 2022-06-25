#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s,st;
	scanf("\n");
	getline(cin,s);
	stringstream ss(s);
	vector<string> v;
	string tmp;
	int ok = 0;
	if(n==1) {
		while(ss >> st) {
			if(islower(st[0])) st[0]-=32;
			for(int i=1;i<st.size();i++) {
				if(isupper(st[i])) st[i]+=32;
			}
			v.push_back(st);
		}
		v.pop_back();
		cout << st << " ";
		for(auto x:v) cout << x << " ";
		cout << endl;
	}	else {
		while(ss >> st) {
			if(islower(st[0])) st[0]-=32;
			for(int i=1;i<st.size();i++) {
				if(isupper(st[i])) st[i]+=32;
			}
			if(ok==0) {
				tmp=st;
				ok=1;
			} else v.push_back(st);
		}
		for(auto x:v) cout << x << " ";
		cout << tmp << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
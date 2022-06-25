#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s,xet;
		fflush(stdin);
		scanf("\n");
		getline(cin,s);
		vector<string> v;
		stringstream ss(s);
		while(ss >> xet) {
			v.push_back(xet);
		}
		for(int i=v.size()-1;i>=0;i--) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
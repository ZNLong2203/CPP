#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		scanf("\n");
		getline(cin,s);
		string ans="";
		for(char i=0;i<s.size();i++) {
			if(isdigit(s[i])) {
				ans.push_back(s[i]);
			}
		}
		if(ans[0]=='8' && ans[1]=='4') {
			ans.erase(ans.begin());
			ans.erase(ans.begin());
			cout << "0";
		}
		cout << ans << endl;
	}
}
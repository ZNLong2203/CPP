#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string luu1,luu2;
		string xet = "";
		set<string> ss;
		
		fflush(stdin);
		scanf("\n");
		getline(cin,luu1);
		
		fflush(stdin);
		scanf("\n");
		getline(cin,luu2);
		
		for(int i=0;i<luu1.size();i++) {
			if(luu1[i] == ' ') {
				ss.insert(xet);
				xet="";
			}	else {
				xet.push_back(luu1[i]);
			}
		}
		ss.insert(xet);
		xet="";
		
		for(int i=0;i<luu2.size();i++) {
			if(luu2[i] == ' ') {
				ss.erase(xet);
				xet="";
			}	else {
				xet.push_back(luu2[i]);
				if(luu2[i]==luu2[luu2.size()-1]) {
					ss.erase(xet);
				}
			}
		}
		
		for(auto x:ss) {
			cout << x << " ";
		}
		cout << endl;
	}
}
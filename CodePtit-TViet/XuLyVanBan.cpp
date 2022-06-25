#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main() {
	string s;
//	ifstream in_file {"DATA.in"};
	cin >> s;
	for(int i=0;i<s.size();i++) {
		s[i] = tolower(s[i]);
	}
	s[0] = toupper(s[0]);
	cout << s << " ";
	int ok = 0;
	while(cin >> s) {
		if(s[s.size()-1]=='.' || s[s.size()-1]=='?' || s[s.size()-1]=='!') {
			s.pop_back();
			for(int i=0;i<s.size();i++) {
				s[i] = tolower(s[i]);
			}	
			if(ok==1) s[0] = toupper(s[0]);
			cout << s << endl;
			ok=1;
		}	else if(ok==1) {
			ok=0;
			for(int i=0;i<s.size();i++) {
				s[i] = tolower(s[i]);
			}
			s[0] = toupper(s[0]);
			cout << s << " ";
		}	else {
			for(int i=0;i<s.size();i++) {
				s[i] = tolower(s[i]);
			}	
			cout << s << " ";
		}
	}
}
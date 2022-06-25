#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int count=0;
	for(int i=s.size()-1;i>=0;i--) {
		if(s[i]=='y' || s[i]=='Y') {
			if(s[i-1]=='p' || s[i-1]=='P') {
				if(s[i-2]=='.') {
					count++;
					cout << "yes";
					return 0;
				}	else {
					cout << "no";
					return 0;
				}
			}	
		}	
	}
	if(count==0) {
		cout << "no";
	}
}
#include<bits/stdc++.h>
using namespace std;

void work(string s) {
	int xet = s.size()-1;
	int index = min(99,xet);
	if(index >= 99) {
		while(s[index]!=' ') {
			s.pop_back();
			index--;
		}	
		for(int i=0;i<index;i++) {
			cout << s[i];
		}
		cout << endl;
		return;
	}
	cout << s << endl;
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		fflush(stdin);
		scanf("\n");
		getline(cin,s);
		work(s);
	}
}
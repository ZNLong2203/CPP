#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		if(n==101) {
			s="ABBADCCABDCCABD";
		}	else {
			s="ACCABCDDBBCDDBB";
		}
		int i=0;
		float count=0;
		while(i!=15) {
			char c;
			cin >> c;
			if(c==s[i]) {
				count++;
			}
			i++;
		}
		cout << setprecision(2) << fixed << (count/15)*10 << endl;
	}
}

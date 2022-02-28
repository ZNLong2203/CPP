#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		int a[10000];
		a['A']=2,a['B']=2,a['C']=2,a['D']=3,a['E']=3,a['F']=3,a['G']=4;
		a['H']=4,a['I']=4,a['J']=5,a['K']=5,a['L']=5,a['M']=6,a['N']=6;
		a['O']=6,a['P']=7,a['Q']=7,a['R']=7,a['S']=7,a['T']=8,a['U']=8;
		a['V']=8,a['W']=9,a['X']=9,a['Y']=9,a['Z']=9;
		int count=0;
		int len=str.size();
		for(int i=0;i<=len/2;i++) {
			if(islower(str[i])) {
				str[i]-=32;
			}
			if(islower(str[len-i-1])) {
				str[len-i-1]-=32;
			}
			if(a[str[i]]!=a[str[len-i-1]]) {
				count++;
				break;
			}
		}
		if(count==0) {
			cout << "YES\n";
		}	else cout << "NO\n";
	}
}

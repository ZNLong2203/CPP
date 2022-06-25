#include<bits/stdc++.h>
using namespace std;

struct car {
	string id;
	string type;
	int ghe;
	string io;
	string date;
};

void input(car &xe,string s) {
	stringstream ss(s);
	ss >> xe.id;
	ss >> xe.type;
	ss >> xe.ghe;
	ss >> xe.io;
	ss >> xe.date;
}

int main() {
	map<string,long long> mp;
	int n;
	cin >> n;
	car xe[n+5];
	string s,tach;
	for(int i=0;i<n;i++) {
		fflush(stdin);
		getline(cin,s);
		input(xe[i],s);
		
		if(xe[i].io=="IN") {
				if(xe[i].ghe==5) {
				mp[xe[i].date]+=10000;
			}	else if(xe[i].ghe==7) {
				mp[xe[i].date]+=15000;
			}	else if(xe[i].ghe==2) {
				mp[xe[i].date]+=20000;
			}	else if(xe[i].ghe==29) {
				mp[xe[i].date]+=50000;
			}	else if(xe[i].ghe==45) {
				mp[xe[i].date]+=70000;
			}	
		}
	}
	for(auto x:mp) {
        cout << x.first << ": " << x.second << endl;
    }
}

//test case:
//	5
//	30F-123.15 Xe_con 5 OUT 06/11/2021
//	30F-123.15 Xe_con 5 IN 06/11/2021
//	30H-123.15 Xe_con 7 IN 06/11/2021
//	29H-222.68 Xe_tai 2 IN 07/11/2021
//	30G-511.15 Xe_con 5 IN 07/11/2021
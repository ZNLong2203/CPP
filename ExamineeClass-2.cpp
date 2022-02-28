#include<bits/stdc++.h>
using namespace std;

class Student {
	public:
		string id;
		string name;
		double math;
		double phys;
		double chem;
		double kk;
		string pass;
};

void priority(int kk,Student &sv) {
	if(kk-'0'==1) {
		sv.kk=0.5;
	}	else if(kk-'0'==2) {
		sv.kk=1;
	}	else if(kk-'0'==3) {
		sv.kk=2.5;
	}	else {
		sv.kk=0;
	}
}

int main() {
	Student sv;
	int kk;
	fflush(stdin);
	getline(cin,sv.id);
	getline(cin,sv.name);
	cin >> sv.math >> sv.phys >> sv.chem;
	
	sv.math=sv.math*2+sv.phys+sv.chem;
	priority(sv.id[2],sv);
	if(sv.kk+sv.math>=24) {
		sv.pass="TRUNG TUYEN";
	}	else sv.pass="TRUOT";
	
	cout << sv.id << " " << sv.name << " " << sv.kk << " " << sv.math << " " << sv.pass;
}
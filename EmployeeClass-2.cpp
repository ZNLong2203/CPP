#include<bits/stdc++.h>
using namespace std;

class Employee {
	public:
		string name;
		long long bs;
		int workday;
		string pos;
		long long spfund;
};

void input(Employee &nv) {
	scanf("\n");
	getline(cin,nv.name);
	scanf("\n");
	cin >> nv.bs;
	scanf("\n");
	cin >> nv.workday;
	fflush(stdin);
	scanf("\n");
	getline(cin,nv.pos);	
}

void supfund(Employee &nv) {
	if(nv.pos=="GD") {
		nv.spfund=250000;
	}	else if (nv.pos=="PGD") {
		nv.spfund=200000;
	} else if (nv.pos=="TP") {
		nv.spfund=180000;
	}	else if (nv.pos=="NV") {
		nv.spfund=150000;
	}
}

int main() {
	Employee nv;
	input(nv);
	long long MonthSalary = nv.workday*nv.bs;
	long long bonus=0;
	if(nv.workday>=22 && nv.workday<25) {
		bonus=(MonthSalary*10)/100;
	}	else if(nv.workday>=25) {
		bonus=(MonthSalary*20)/100;
	}	else {
		bonus=0;
	}
	supfund(nv);
	cout << "NV01 " << nv.name << " " << MonthSalary << " "; 
	if(bonus!=0) {
		cout << bonus << " " ;
	}
	cout << nv.spfund << " " << nv.spfund+MonthSalary+bonus; 
}
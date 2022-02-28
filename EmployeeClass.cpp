#include<bits/stdc++.h>
using namespace std;

class Employee {
	public :
		string name;
		string gen;
		string dob;
		string add;
		string sdt;
		string hopdong;
};

void input(Employee &nv) {
	fflush(stdin);
	getline(cin,nv.name);
	getline(cin,nv.gen);
	getline(cin,nv.dob);
	getline(cin,nv.add);
	getline(cin,nv.sdt);
	getline(cin,nv.hopdong);
}

int main() {
	Employee nv;
	input(nv);
	cout << "00001 " << nv.name << " " << nv.gen << " " <<
	nv.dob << " " << nv.add << " " << nv.sdt << " " << nv.hopdong;
}
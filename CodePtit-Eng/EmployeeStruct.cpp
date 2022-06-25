#include<bits/stdc++.h>
using namespace std;

struct Employee {
	string name;
	string gen;
	string dob;
	string add;
	string sdt;
	string hopdong;
};

void input(Employee &a) {
	fflush(stdin);
	getline(cin,a.name);
	getline(cin,a.gen);
	getline(cin,a.dob);
	getline(cin,a.add);
	getline(cin,a.sdt);
	getline(cin,a.hopdong);
}

int print(Employee &a) {
	cout << "00001 " << a.name << " " << a.gen << " " <<
	a.dob << " " << a.add << " " << a.sdt << " " << a.hopdong;
	return 0;
}

int main() {
    struct Employee a;
    input(a);
    print(a);
    return 0;
}
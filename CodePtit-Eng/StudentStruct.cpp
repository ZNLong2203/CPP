#include<bits/stdc++.h>
using namespace std;

struct Student {
	string name;
	string lop;
	string dob;
	float gpa;
};

void input(Student &a) {
	fflush(stdin);
	getline(cin,a.name);
	getline(cin,a.lop);
	getline(cin,a.dob);
	cin >> a.gpa;	
}

int print(Student &a) {
	cout << "B20DCCN001 " << a.name << " " << a.lop << " " ;
	if(a.dob[1]=='/') {
		cout << "0";
	}
	for(int i=0;i<a.dob.size();i++) {
		cout << a.dob[i];
		if(a.dob[i]=='/' && a.dob[i+2]=='/') {
			cout << "0";
		}	
	}
	cout << " " << setprecision(2) << fixed << a.gpa;
	return 0;
}

int main() {
    struct Student a;
    input(a);
    print(a);
    return 0;
}
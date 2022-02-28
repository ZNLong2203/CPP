#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

class Student {
	public:
		string name;
		string lop;
		string dob;
		float gpa;	
};

void input(Student &sv) {
	fflush(stdin);
	getline(cin,sv.name);
	getline(cin,sv.lop);
	getline(cin,sv.dob);
	cin >> sv.gpa;
}

int main() {
	Student sv;
	input(sv);
	
	cout << "B20DCCN001 " << sv.name << " "<< sv.lop
	<< " ";
	if(sv.dob[1]=='/') {
		cout << "0";
	}	
	int len = sv.dob.size();
	for(int i=0;i<len;i++) {
		cout << sv.dob[i];
		if(sv.dob[i]=='/') {
			if(sv.dob[i+2]=='/') {
				cout << "0";
			}
		}
	} 
	cout << " " << setprecision(2) << fixed << sv.gpa;	
	return 0;
}
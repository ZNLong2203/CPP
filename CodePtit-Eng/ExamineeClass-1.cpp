#include<bits/stdc++.h>
using namespace std;

class Student {
	public:
		string name;
		string dob;
		float subj1;
		float subj2;
		float subj3;
};

int main() {
	Student sv;

	fflush(stdin);
	getline(cin,sv.name);
	getline(cin,sv.dob);
	cin >> sv.subj1 >> sv.subj2 >> sv.subj3;
	sv.subj1+=sv.subj2+sv.subj3;
	cout << sv.name << " " << sv.dob << " " << setprecision(1) << fixed << sv.subj1; 
}
#include<bits/stdc++.h>
using namespace std;

struct Examinee {
	string name;
	string dob;
	float s1;
	float s2;
	float s3;	
};

void input(Examinee &A) {
	fflush(stdin);
	getline(cin,A.name);
	getline(cin,A.dob);
	cin >> A.s1 >> A.s2 >> A.s3;
}

int print(Examinee &A) {
	A.s1+=A.s2+A.s3;
	cout << A.name << " " << A.dob << " " << setprecision(1) << fixed << A.s1;
	return 0;
}

int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}
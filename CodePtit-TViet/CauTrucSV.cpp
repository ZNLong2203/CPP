#include<bits/stdc++.h>
using namespace std;

struct SinhVien {
	string ten, lop, dob;
	float gpa;	
};

void nhapThongTinSV(SinhVien &a) {
	fflush(stdin);
	scanf("\n");
	getline(cin,a.ten);
	scanf("\n");
	getline(cin,a.lop);
	scanf("\n");
	getline(cin,a.dob);
	if(a.dob[1]=='/') a.dob.insert(0,"0");
	if(a.dob[4]=='/') a.dob.insert(3,"0");
	fflush(stdin);
	scanf("\n");
	cin >> a.gpa;	
}

void inThongTinSV(SinhVien &a) {
	cout << "N20DCCN001 " << a.ten << " " << a.lop << " ";
	cout << a.dob << " " << setprecision(2) << fixed << a.gpa << endl;	
}

int main() {
	struct SinhVien a;
	nhapThongTinSV(a);
	inThongTinSV(a);
	return 0;
}
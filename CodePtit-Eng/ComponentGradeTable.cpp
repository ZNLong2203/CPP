#include<bits/stdc++.h>
using namespace std;

struct Students {
	string id;
	string name;
	string lop;
	double diem1,diem2,diem3;
	void input() {
		fflush(stdin);
		scanf("\n");
		getline(cin,id);
		fflush(stdin);
		scanf("\n");
		getline(cin,name);
		fflush(stdin);
		scanf("\n");
		getline(cin,lop);
		scanf("\n");
		cin >> diem1 >> diem2 >> diem3;
	}	
};

bool cmp(Students &a,Students &b) {
	return a.name < b.name;
}

void output(Students &sv) {
	cout << sv.id << " " << sv.name << " " << sv.lop << " ";
	cout << setprecision(1) << fixed;
	cout << sv.diem1 << " " << sv.diem2 << " " << sv.diem3 << endl;	
}

int main() {
	Students sv[200];
	int t;
	cin >> t;
	for(int i=0;i<t;i++) {
		sv[i].input();
	}
	int dem=1;
	sort(sv,sv+t,cmp);
	for(int i=0;i<t;i++) {
		cout << dem << " ";
		output(sv[i]);
		dem++;
	}
}

